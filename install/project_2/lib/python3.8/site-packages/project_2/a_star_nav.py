import rclpy
import time
import numpy as np
import cv2
from rclpy.node import Node
from msg_manage.srv import TwistSrv
from tf2_msgs.msg import TFMessage
from scipy.spatial.transform import Rotation
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point,Twist
from sensor_msgs.msg import LaserScan
from std_msgs.msg import ColorRGBA
from sensor_msgs.msg import Joy
from msg_manage.msg import Vehicle

import matplotlib.pyplot as plt

import a_star

class slam_navigation_node(Node):
    def __init__(self):
        super().__init__('slam_navigation_node')
        

        #self.create_subscription(TFMessage,'tf',self.get_tf,0)
        self.create_subscription(LaserScan,'scan',self.get_scan,0)
        self.create_subscription(Vehicle,'v2x',self.get_v2x,0)

        self.path_pub = self.create_publisher(Path, 'path', 10)
        self.marker_pub = self.create_publisher(Marker, 'marker', 10)
        self.car_marker_pub = self.create_publisher(Marker, 'car_marker', 10)
        self.went_marker_pub = self.create_publisher(Marker, 'went_marker', 10)
        self.motor_cmd_pub = self.create_publisher(Twist, 'motor_cmd', 10)

        self.pub = False

        timer_period = 0.2  # seconds
        self.timer = self.create_timer(timer_period, self.controller)

        #self.rout = np.array([[0,0],[0,5.5],[-3,5.5],[-3,4.5],[-0.3,4.5],[-0.3,0]])
        self.rout = np.array([[-1,-0.5],[1,10],[5,11],[7,13]],dtype=np.float)
        self.main_rout = np.arange(len(self.rout))
        self.done_turning = True
        self.min_dist = np.inf
        self.reach_dist = np.array([0.2,0.2,0.2])

        self.markers = Marker()
        self.markers.header.frame_id = '/base_scan'
        self.markers.action = Marker.ADD
        self.markers.type = 5
        self.markers.scale.x = 0.02
        self.new_pose = False
        
        self.car_markers = Marker()
        self.car_markers.header.frame_id = '/odom'
        self.car_markers.action = Marker.ADD
        self.car_markers.type = 5
        self.car_markers.scale.x = 0.02

        self.went_markers = Marker()
        self.went_markers.header.frame_id = '/odom'
        self.went_markers.action = Marker.ADD
        self.went_markers.type = 4
        self.went_markers.scale.x = 0.02
        self.went_markers.points=[]
        self.went_markers.colors=[]
     
        self.car_pos=None
        self.scan_p=None
        self.add_path=[[None]]
        self.add_path_n=0
        self.car_tf=None
        self.v2x_arr = {}

        self.check_dist = 3
        self.car_width = 0.6
        self.crash_check = 1.5
        self.color_a = 0.2
        self.now_dot = 0
        self.back_ang = 60
        self.adjustment_dist = 0.3
        self.lidar_checl_l = 5


        self.logger("run a*")

    def get_deg(self,vac1,vac2):
        vac1 = np.array(vac1)
        vac2 = np.array(vac2)
        norm = np.linalg.norm(vac1)*np.linalg.norm(vac2)
        rho = np.arcsin(np.cross(vac1,vac2)/norm)
        cos_ang= vac1.dot(vac2) / norm
        ang=np.rad2deg(np.arccos(cos_ang))
        if rho<0:
            return -ang
        return ang
    def get_dist(self,x1,x2):
        return np.sqrt((x1[0]-x2[0])**2+(x1[1]-x2[1])**2)
    def nonPID_controller(self,e):
        if e >= self.adjustment_dist:
            return self.back_ang
        return self.back_ang * ( e / self.adjustment_dist )
    def p4(self, p1, p2, p3):
        #https://stackoverflow.com/questions/47177493/python-point-on-a-line-closest-to-third-point
        x1, y1 = p1
        x2, y2 = p2
        x3, y3 = p3
        dx, dy = x2-x1, y2-y1
        det = dx*dx + dy*dy
        a = (dy*(y3-y1)+dx*(x3-x1))/det
        return x1+a*dx, y1+a*dy


    def path_draw_pub(self):
        path_msg = Path()
        path_msg.header.frame_id = "/odom"
        for i in self.rout:
            pose = PoseStamped()
            pose.pose.position.x = i[0]
            pose.pose.position.y = i[1]
            pose.pose.position.z = 0.0
            pose.pose.orientation.x = 0.0
            pose.pose.orientation.y = 0.0
            pose.pose.orientation.z = 0.0
            pose.pose.orientation.w = 0.0
            path_msg.poses.append(pose)
        self.path_pub.publish(path_msg)


    def logger(self,data):
        self.get_logger().info(str(data))

    def add_point(self, point0, add_point):
        point = Point()
        point.x, point.y = add_point
        return [point0,point]

    def add_color(self, add_color):
        color = ColorRGBA()
        color.r, color.g, color.b, color.a = add_color
        return [color,color]

    def get_v2x(self,data):
        if data.header.frame_id == 'UGV':
            if self.car_tf and (abs(self.car_tf-(data.heading/180)*np.pi)>np.pi/4):
                return
            self.car_pos = [data.position.z,data.position.x]
            self.car_tf = (data.heading/180)*np.pi
            self.new_pose = True

            if self.pub:
                point = Point()
                color = ColorRGBA()
                point.x, point.y = self.car_pos[0], self.car_pos[1]
                color.r, color.g, color.a = 1.0, 0.5, 1.0
                self.went_markers.points.append(point)
                self.went_markers.colors.append(color)
                self.went_marker_pub.publish(self.went_markers)
        speed = data.speed
        if not (speed.x==0 and speed.y==0 and speed.z==0):
            self.v2x_arr[data.header.frame_id] = data


    def get_scan(self,data):
        if not self.new_pose:
            return
        points = []
        colors = []
        point0 = Point()
        self.scan_p = []

        check_ang = np.arctan2(self.car_width/2, self.crash_check)
        crash_color = ColorRGBA()
        crash_color.r, crash_color.b, crash_color.a=1.0, 1.0, self.color_a*2
        save_arr = np.zeros(len(data.ranges))


        for index,item in enumerate(data.ranges):
            #if index % 4 != 0:
            #    continue
            now_ang = data.angle_min+data.angle_increment*index

            temp_ang = now_ang+self.car_tf
            if not item > self.lidar_checl_l:
                temp_p = [item * np.cos(temp_ang),
                          item * np.sin(temp_ang),1]
            else: 
                temp_p = [self.lidar_checl_l * np.cos(temp_ang),
                          self.lidar_checl_l * np.sin(temp_ang),-1]
            self.scan_p.extend([temp_p])

            if self.pub:
                point1 = Point()
                color = ColorRGBA()
                color.a = self.color_a
                if item < self.check_dist:
                    point1.x = item * np.cos(now_ang)
                    point1.y = item * np.sin(now_ang)
                    color.g = min(0.7,item/self.check_dist)
                    color.r= max(0.3,1-item/self.check_dist)
                else:
                    point1.x = self.check_dist * np.cos(now_ang)
                    point1.y = self.check_dist * np.sin(now_ang)
                    point1.z = -1.0
                    color.g = 1.0
                points.extend([point0,point1])
                colors.extend([color,color])
    
        if self.pub:
            self.markers.points=points
            self.markers.colors=colors
            self.marker_pub.publish(self.markers)
            self.path_draw_pub()

        self.new_pose = False
            
    '''    
    def get_tf(self,data):
        for i in data.transforms:
            if i.child_frame_id == "UGV":
                tfx = i.transform.rotation.x
                tfy = i.transform.rotation.y
                tfz = i.transform.rotation.z
                tfw = i.transform.rotation.w
                rot = Rotation.from_quat([tfx, tfy, tfz, tfw])
                self.plt0 = rot.as_euler('xyz')[2]
    '''

    def controller(self):
        print("control")
        if not self.car_pos:
            print('wait_pos')
            return
        if not self.scan_p:
            print('wait_scan')
            return
        if len(self.rout)-1 == self.now_dot:
            print("finish")
            cmd = Twist()
            cmd.linear.x = 500.0
            cmd.angular.x = 0.0
            self.motor_cmd_pub.publish(cmd)
            return
        next_spot_r = 0.5
        next_spot_ang = 60.0

        go_rout = np.array(self.rout)
        go_dot = self.now_dot+self.add_path_n
        if self.add_path[0][0]:
            print('add')
            go_rout = np.insert(go_rout,self.now_dot+1,self.add_path,0)

        deg = self.get_deg([np.cos(self.car_tf),np.sin(self.car_tf)],
                                    go_rout[go_dot+1]-self.car_pos)
        dist = self.get_dist(go_rout[go_dot+1],self.car_pos)

        deg_path = self.get_deg(go_rout[go_dot+1]-go_rout[go_dot],
                                go_rout[go_dot+1]-self.car_pos)

        print((go_dot,deg,dist,deg_path))
        if abs(deg_path)>60 or dist<0.5:
            if self.add_path[0][0]:
                if self.add_path_n < len(self.add_path)-2:
                    self.add_path_n+=1
                else:
                    self.add_path=[[None]]
                    self.add_path_n=0
            else:
                self.now_dot += 1
            return



        error_point = self.p4(go_rout[go_dot],
                              go_rout[go_dot+1],
                              self.car_pos)
        error = self.get_dist(error_point,self.car_pos)

        error_sign = self.get_deg(self.car_pos-go_rout[go_dot],
                                    go_rout[go_dot+1]-go_rout[go_dot])
        deg_car2path = self.get_deg(go_rout[go_dot+1]-go_rout[go_dot],
                                    [np.cos(self.car_tf),np.sin(self.car_tf)],)

        deg2 = self.nonPID_controller(error)*np.sign(error_sign) - deg_car2path

        print(error, self.nonPID_controller(error), deg_car2path, deg2)

        cmd = Twist()
        cmd.linear.x = 700.0
        cmd.angular.x = -deg2
        self.motor_cmd_pub.publish(cmd)

        #print(deg2, self.nonPID_controller(error)*np.sign(error_sign), deg_car2path)

        
        res = 1/10
        expand = 20
        car_w = int(0.75/res)
        path_w = int(0.1/res)
        rout_drew = (go_rout/res).astype(np.int64)



        x_lim = rout_drew[:,0]
        x_lim = [x_lim.max(),x_lim.min()]
        y_lim = rout_drew[:,1]
        y_lim = [y_lim.max(),y_lim.min()]

        drew_car = np.array(self.car_pos)/res
        drew_car = drew_car.astype(np.int64)

        drew_scan = np.array(self.scan_p)/res
        drew_scan = drew_scan.astype(np.int64)
        drew_scan[:,:2] += drew_car
        
        sx_lim = drew_scan[:,0]
        sx_lim = [sx_lim.max(),sx_lim.min()]
        sy_lim = drew_scan[:,1]
        sy_lim = [sy_lim.max(),sy_lim.min()]

        expend_x_max = max((x_lim[0],drew_car[0],sx_lim[0]))
        expend_x_min = min((x_lim[1],drew_car[0],sx_lim[1]))
        expend_y_max = max((y_lim[0],drew_car[1],sy_lim[0]))
        expend_y_min = min((y_lim[1],drew_car[1],sy_lim[1]))
        
        '''
        header=std_msgs.msg.Header(
            stamp=builtin_interfaces.msg.Time(sec=0, nanosec=0), 
            frame_id='24 car'), 
        position=geometry_msgs.msg.Vector3(
            x=-12.034137725830078, 
            y=0.017114698886871338, 
            z=1.5780234336853027), 
        position_accuracy=0.100006103515625, 
        speed=geometry_msgs.msg.Vector3(
            x=-0.0741627250534025, 
            y=-1.6688281965212084e-05, 
            z=1.0781691047451938), 
        acceleration=geometry_msgs.msg.Vector3(
            x=0.0, y=0.0, z=0.0), 
        heading=89.37145590782166, 
        turn_angle=0.0, 
        turn_rate=0.0007915013732072017, 
        control_status=0, 
        vehicle_size=geometry_msgs.msg.Vector3(
            x=1.0067074298858643, 
            y=0.6555888056755066, 
            z=2.2931339740753174)
        )'''

        for _,obj in self.v2x_arr.items():
            expend_x_max = max(expend_x_max,int(obj.position.z))
            expend_x_min = min(expend_x_min,int(obj.position.z))
            expend_y_max = max(expend_y_max,int(obj.position.x))
            expend_y_min = min(expend_y_min,int(obj.position.x))

        
        rout_drew[:,0] += -expend_x_min+expand
        rout_drew[:,1] += -expend_y_min+expand
        drew_car  += [-expend_x_min+expand,-expend_y_min+expand]
        drew_scan[:,:2] += [-expend_x_min+expand,-expend_y_min+expand]


        a_img = np.zeros(( expend_y_max-expend_y_min+expand*2,
                         expend_x_max-expend_x_min+expand*2))
        path_img = np.array(a_img)
        a_img2 = np.array(a_img)
        img = np.zeros(( expend_y_max-expend_y_min+expand*2,
                         expend_x_max-expend_x_min+expand*2,3))
        
        '''
        for i in drew_scan:
            if i[2]>0:
                cv2.circle(a_img, i[:2], car_w, 1, -1)
        cv2.line(path_img, rout_drew[go_dot], rout_drew[go_dot+1],
                                        1,path_w)
       
        add_img = cv2.bitwise_and(path_img, a_img)
        add_path = None
        if 1 in add_img:
            print('hit!!!!!!')
            cmd = Twist()
            cmd.linear.x = 500.0
            cmd.angular.x = 0.0
            self.motor_cmd_pub.publish(cmd)
            
            for i in drew_scan:
                if i[2]>0:
                    cv2.circle(a_img2, i[:2], int(car_w*2), 1, -1)
                else:
                    cv2.circle(a_img2, i[:2], car_w, 2, -1)
    
            for i in range(len(drew_scan)-1):
                cv2.line(a_img2, drew_scan[i,:2], drew_scan[i+1,:2],
                                            2,car_w)
            cv2.line(a_img2, drew_scan[0,:2], drew_scan[-1,:2],
                                            2,car_w)
            cv2.circle(a_img2, drew_car, 3, 0, -1)

            next_p = rout_drew[self.now_dot+1]
            if a_img[next_p[0],next_p[1]] > 0:
                print('next_dot cover')
                self.now_dot+=1
            
            #path_hit = np.where(add_img == 1)
            #path_hit_l = [drew_car[0]-path_hit[0],drew_car[1]-path_hit[1]]
            #path_hit_l = path_hit_l[0]**2+path_hit_l[1]**2
            #min_hit = np.argmin(path_hit_l)
            #hit_p = [path_hit[1][min_hit],path_hit[0][min_hit]]
            #new_path = [hit_p]
            
            new_path = [drew_car]
            
            try:
                path,path_o,path_c = a_star.astar(a_img2, drew_car, rout_drew[self.now_dot+1])
            except:
                print('a* fail')
                cv2.imshow('binary_img',a_img2)
                cv2.waitKey(0)

            print('path len',len(path))
            start = path[0]
            add_path = [start]
            for i in path:
                find_path_img = np.zeros(( expend_y_max-expend_y_min+expand*2,
                                           expend_x_max-expend_x_min+expand*2))
                cv2.line(find_path_img, [start[1],start[0]], [i[1],i[0]],
                                        1,1)

                if 1 in cv2.bitwise_and(a_img2, find_path_img):
                    add_path.extend([i])
                    start=i
            if add_path[-1] != path[-1]:
                add_path.extend([path[-1]])
            print('adding path',add_path)
            print('search range',len(path_c))
            self.add_path = np.array(add_path,dtype=np.float64)
            self.add_path[:,0] -= -expend_y_min+expand
            self.add_path[:,1] -= -expend_x_min+expand
            self.add_path *= res
            for i in self.add_path:
                i[1],i[0] = i[0],i[1]
            self.add_path_n=1
            
            #for i in path_c:
            #    temp_p = i.position
            #    img[temp_p[0],temp_p[1]]=[0.3,0.3,0.3]
            #for i in path:
            #    cv2.circle(a_img, [i[1],i[0]], path_w, (0.5,0.5,0.5), -1)
            #imgs = cv2.flip(a_img,0)
            #cv2.imshow('img',imgs)
            #cv2.waitKey(0)
        '''
        

        print(img.shape)
        print('car pos',drew_car)
        way_l = car_w*2
        way = drew_car+[int(way_l*np.cos(self.car_tf)),int(way_l*np.sin(self.car_tf))]
        cv2.circle(img, drew_car, int(car_w/2), (0,1,0), -1)
        cv2.line(img, drew_car, way, (0.5,0.5,0), int(car_w/3))


        ## print lidar
        for i in range(len(drew_scan)-1): ## link point
            cv2.line(img, drew_scan[i,:2], drew_scan[i+1,:2],
                                        (0.5,0,0.5),1)
        cv2.line(img, drew_scan[0,:2], drew_scan[-1,:2],
                                        (0.5,0,0.5),1)
        for i in drew_scan:  ## two type point
            if i[2]>0:
                cv2.circle(img, i[:2], 1, (0,0,0.5), -1)
            else:
                cv2.circle(img, i[:2], 1, (0.5,0,0.5), -1)
        
        for key,obj in self.v2x_arr.items():
            if key == 'UGV': continue
            obj_pos = np.array([obj.position.z,obj.position.x])
            obj_pos /= res
            obj_pos = obj_pos.astype(np.int64)
            obj_pos += [-expend_x_min+expand,-expend_y_min+expand]
            cv2.circle(img, obj_pos, int(car_w/2), (0,0.5,1), -1)
        
        ## print path
        for i in range(len(rout_drew)-1):
            cv2.line(img, rout_drew[i], rout_drew[i+1],
                        (1,1,1),path_w)
            cv2.circle(img, rout_drew[i], path_w, (1,0.5,0.5), -1)
            
            '''
            if self.add_path[0][0] and (i == self.now_dot):
                cv2.line(img, rout_drew[i], [add_path[0][1],add_path[0][0]],
                            (0.7,0.7,1),path_w)
                for j in range(len(add_path)-1):
                    cv2.line(img, [add_path[j][1],add_path[j][0]],
                                  [add_path[j+1][1],add_path[j+1][0]],
                                  (0.7,0.7,1),path_w)
                cv2.line(img, [add_path[-1][1],add_path[-1][0]],
                            rout_drew[i+1],
                            (0.7,0.7,1),path_w)
                for j in add_path:
                    cv2.circle(img, [j[1],j[0]], path_w, (1,0.5,0.5), -1)
            '''

        

        img = cv2.flip(img,0)
        cv2.imshow('img',img)
        cv2.waitKey(1)
        


def main(args=None):
    rclpy.init(args=args)
    print("slam navigation start")
    slam_navigation = slam_navigation_node()

    rclpy.spin(slam_navigation)

    slam_navigation.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
