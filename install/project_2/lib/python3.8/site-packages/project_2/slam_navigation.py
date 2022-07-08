import rclpy
import time
import numpy as np
from rclpy.node import Node
from msg_manage.srv import TwistSrv
from tf2_msgs.msg import TFMessage
from scipy.spatial.transform import Rotation
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped
from visualization_msgs.msg import Marker
from geometry_msgs.msg import Point
from sensor_msgs.msg import LaserScan
from std_msgs.msg import ColorRGBA

class slam_navigation_node(Node):
    def __init__(self):
        super().__init__('slam_navigation_node')
        
        self.motor_cmd_client = self.create_client(TwistSrv, 'motor_cmd_servise')
        while not self.motor_cmd_client.wait_for_service(timeout_sec=3.0):
            self.logger('motor_cmd_servise not found, waiting again...')
        self.logger("find motor_cmd_servise")

        self.create_subscription(TFMessage,'tf',self.get_tf,10)
        self.create_subscription(LaserScan,'scan',self.get_scan,10)

        self.path_pub = self.create_publisher(Path, 'path', 10)
        self.marker_pub = self.create_publisher(Marker, 'marker', 10)
        self.car_marker_pub = self.create_publisher(Marker, 'car_marker', 10)
        self.went_marker_pub = self.create_publisher(Marker, 'went_marker', 10)


        timer_period = 0.25  # seconds
        self.timer = self.create_timer(timer_period, self.controller)
        
        self.count = 0
        self.car_pos = [0,0]
        self.car_last_pos = [0,0]
        self.car_tf = [0,0,0]
        self.now_dot = -1
        self.rout = np.array([[0,0],[0,5.5],[-3,5.5],[-3,4.5],[0,4.5],[0,0]])
        self.done_turning = True
        self.min_dist = np.inf
        self.reach_dist = np.array([0.2,0.2,0.2])

        self.path_msg = Path()
        self.path_msg.header.frame_id = "/odom"
        for i in self.rout:
            pose = PoseStamped()
            pose.pose.position.x = i[0]
            pose.pose.position.y = i[1]
            pose.pose.position.z = 0.0

            pose.pose.orientation.x = 0.0
            pose.pose.orientation.y = 0.0
            pose.pose.orientation.z = 0.0
            pose.pose.orientation.w = 0.0
            self.path_msg.poses.append(pose)

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
        
        self.check_dist = 3
        self.color_a = 0.2
        self.back_ang = 60
        self.adjustment_dist = 1
        self.logger("car pos initial")



    def logger(self,data):
        self.get_logger().info(str(data))
    
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

    def p4(self, p1, p2, p3):
        #https://stackoverflow.com/questions/47177493/python-point-on-a-line-closest-to-third-point
        x1, y1 = p1
        x2, y2 = p2
        x3, y3 = p3
        dx, dy = x2-x1, y2-y1
        det = dx*dx + dy*dy
        a = (dy*(y3-y1)+dx*(x3-x1))/det
        return x1+a*dx, y1+a*dy

    def add_point(self, point0, add_point):
        point = Point()
        point.x, point.y = add_point
        return [point0,point]

    def add_color(self, add_color):
        color = ColorRGBA()
        color.r, color.g, color.b, color.a = add_color
        return [color,color]

    def send_motor_cmd(self,lin,ang):
        request = TwistSrv.Request()
        request.linear = lin
        request.angular = ang
        return self.motor_cmd_client.call_async(request)

    def get_scan(self,data):
        if not self.new_pose:
            return
        points = []
        colors = []
        point0 = Point()
        #print(data.angle_max)
        #print(np.pi/data.angle_increment)
        #print(len(data.ranges))
        for index,item in enumerate(data.ranges):
            if index % 4 != 0:
                continue
            point1 = Point()
            color = ColorRGBA()
            color.a = self.color_a

            if item < self.check_dist:
                point1.x = item * np.cos(data.angle_min+data.angle_increment*index)
                point1.y = item * np.sin(data.angle_min+data.angle_increment*index)
                color.g = min(0.7,item/self.check_dist)
                color.r= max(0.3,1-item/self.check_dist)
            else:
                point1.x = self.check_dist * np.cos(data.angle_min+data.angle_increment*index)
                point1.y = self.check_dist * np.sin(data.angle_min+data.angle_increment*index)
                point1.z = -1.0
                color.g = 1.0
            points.extend([point0,point1])
            colors.extend([color,color])

        self.markers.points=points
        self.markers.colors=colors
        self.marker_pub.publish(self.markers)
        self.new_pose = False
            

    def get_tf(self,data):
        for i in data.transforms:
            if i.child_frame_id == "base_footprint":
                self.car_pos = [i.transform.translation.x,i.transform.translation.y]
                tfx = i.transform.rotation.x
                tfy = i.transform.rotation.y
                tfz = i.transform.rotation.z
                tfw = i.transform.rotation.w
                rot = Rotation.from_quat([tfx, tfy, tfz, tfw])
                self.car_tf = rot.as_euler('xyz')
                #self.logger(self.car_pos)
                #self.logger(self.car_tf)
                self.new_pose = True
                
                point = Point()
                color = ColorRGBA()
                point.x, point.y = self.car_pos[0], self.car_pos[1]
                color.r, color.g, color.a = 1.0, 0.5, 1.0
                self.went_markers.points.append(point)
                self.went_markers.colors.append(color)
                self.went_marker_pub.publish(self.went_markers)



    def show_going_str(self):
        if self.done_turning:
            if self.now_dot == -1:
                run_str="start->"
            else:
                run_str="start__"
            for i in range(len(self.rout)):
                if i == self.now_dot:
                    run_str += str(i)+"->"
                else:
                    run_str += str(i)+"__"
        else:
            if self.now_dot == -1:
                run_str="[start]__"
            else:
                run_str="start__"
            for i in range(len(self.rout)):
                if i == self.now_dot+1:
                    run_str += "["+str(i)+"]__"
                else:
                    run_str += str(i)+"__"

        return str(run_str[:-2])

    def nonPID_controller(self,e):
        self.back_ang = 60
        self.adjustment_dist = 0.5
        if e >= self.adjustment_dist:
            return self.back_ang
        return self.back_ang * ( e / self.adjustment_dist )


    def controller(self):
        self.path_pub.publish(self.path_msg)

        if self.car_pos == [0,0]:
            return
            
        points=[]
        colors=[]
        point0 = Point()
        point0.x, point0.y = self.car_pos
        
        points.extend(self.add_point(point0,self.rout[self.now_dot+1]))
        colors.extend(self.add_color([0.5, 0.0, 1.0, 1.0]))

        if self.done_turning:       ##### check turning
            self.logger(self.show_going_str())

            if self.car_last_pos != [0,0]:
                if (self.reach_dist == 0).all() :
                    self.reach_dist[:] = self.get_dist(self.car_pos,self.car_last_pos)
                else:
                    self.reach_dist = np.append(self.reach_dist,
                                                [self.get_dist(self.car_pos,self.car_last_pos)]*2)
                    self.reach_dist.sort()
                    self.reach_dist = self.reach_dist[1:-1]
                    
            
            self.car_last_pos = self.car_pos
            

            if self.now_dot == -1:      ##### for initial
                deg = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                                    self.rout[0]-self.car_pos)
                dist = self.get_dist(self.rout[0],self.car_pos)
                self.min_dist = min(dist,self.min_dist)
                deg2 = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                                    self.rout[1]-self.car_pos)
                
                if abs(deg) > 5 and self.min_dist > self.reach_dist[1]:
                    self.logger("turn:"+str(deg))
                    self.response = self.send_motor_cmd(0.0,deg)
                    self.done_turning = False

                elif self.min_dist > self.reach_dist[1]:
                    self.logger("dist:"+str(dist)+" "+str(deg))
                    self.response = self.send_motor_cmd(0.3,deg)
                elif abs(deg2) > 5:
                    self.logger("turn2:"+str(deg2))
                    self.response = self.send_motor_cmd(0.0,deg2)
                    self.done_turning = False

                else:        
                    self.logger("car pos initial done!!")
                    self.now_dot = 0
                    self.min_dist = np.inf


            else:

                deg = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                                    self.rout[self.now_dot+1]-self.car_pos)
                dist = self.get_dist(self.rout[self.now_dot+1],self.car_pos) 
                self.min_dist = min(dist,self.min_dist)

                if self.min_dist > self.reach_dist[1]:  ##### still not reach target point

                    error_point = self.p4(self.rout[self.now_dot], 
                                          self.rout[self.now_dot+1], 
                                          self.car_pos)
                    error = self.get_dist(error_point,self.car_pos)
                    
                    error_sign = self.get_deg(self.car_pos-self.rout[self.now_dot],
                                               self.rout[self.now_dot+1]-self.rout[self.now_dot])
                    deg_car2path = self.get_deg(self.rout[self.now_dot+1]-self.rout[self.now_dot],
                                                [np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],)
                    
                    deg2 = self.nonPID_controller(error)*np.sign(error_sign) - deg_car2path

                    print(deg2, error_sign, deg_car2path)

                    self.response = self.send_motor_cmd(0.3,deg2)
                    self.logger("dist:"+str(dist)+" "+str(deg2))
                    
                    points.extend(self.add_point(point0,error_point))
                    colors.extend(self.add_color([0.0, 0.0, 1.0, 1.0]))

                else: ##### turn to next point
                    if self.now_dot+1 == len(self.rout)-1:
                        self.send_motor_cmd(0.0,0.0)
                        self.logger("done all")
                        while True:
                            print("......")
                            time.sleep(1)
                    
                    deg2 = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                                        self.rout[self.now_dot+2]-self.car_pos)
                    if abs(deg2) > 5:
                        self.logger("turn:"+str(deg2))
                        self.response = self.send_motor_cmd(0.0,deg2)
                        self.done_turning = False
                    else:
                        self.now_dot += 1
                        self.min_dist = np.inf


        else:
            print(self.show_going_str()+"  wait turn"+"."*(self.count%5)+" "*5,end='\r')
            self.count += 1
            if self.response.done():
                self.done_turning = True
                print("\ndone turn!")
                self.count = 0
            
        self.car_markers.points=points
        self.car_markers.colors=colors
        self.car_marker_pub.publish(self.car_markers)


def main(args=None):
    rclpy.init(args=args)
    print("slam navigation start")
    slam_navigation = slam_navigation_node()

    rclpy.spin(slam_navigation)

    slam_navigation.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
