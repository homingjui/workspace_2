import rclpy
import time
import numpy as np
from rclpy.node import Node
from msg_manage.srv import TwistSrv
from tf2_msgs.msg import TFMessage
from scipy.spatial.transform import Rotation

class slam_navigation_node(Node):
    def __init__(self):
        super().__init__('slam_navigation_node')
        
        self.motor_cmd_client = self.create_client(TwistSrv, 'motor_cmd_servise')
        while not self.motor_cmd_client.wait_for_service(timeout_sec=3.0):
            self.logger('motor_cmd_servise not found, waiting again...')
        self.logger("find motor_cmd_servise")

        self.create_subscription(TFMessage,'tf',self.get_tf,10)

        timer_period = 0.5  # seconds
        self.timer = self.create_timer(timer_period, self.controller)
        
        self.count = 0
        self.car_pos = [0,0]
        self.car_tf = [0,0,0]
        self.now_dot = -1
        self.rout = np.array([[0,0],[0,5.5],[-3,5.5],[-3,4.5],[0,4.5],[0,0]])
        self.done_turning = True
        self.min_dist = np.inf

        
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

    def controller(self):
        request = TwistSrv.Request()
        if self.done_turning:
            if self.now_dot == -1:
            
                deg = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                                    self.rout[0]-self.car_pos)
                dist = self.get_dist(self.rout[0],self.car_pos)
                self.min_dist = min(dist,self.min_dist)
                deg2 = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                                    self.rout[1]-self.car_pos)
                
                if abs(deg) > 5 and self.min_dist > 0.1:
                    self.logger("turn:"+str(deg))
                    request.linear = 0.0
                    request.angular = deg
                    self.response = self.motor_cmd_client.call_async(request)
                    self.done_turning = False
                elif self.min_dist > 0.1:
                    self.logger("dist:"+str(dist)+" "+str(deg))
                    request.linear = 0.3
                    request.angular = deg
                    self.response = self.motor_cmd_client.call_async(request)
                elif abs(deg2) > 5:
                    self.logger("turn2:"+str(deg2))
                    request.linear = 0.0
                    request.angular = deg2
                    self.response = self.motor_cmd_client.call_async(request)
                    self.done_turning = False

                else:        
                    self.logger("car pos initial done!!")
                    while True:
                        self.logger("...")
                        time.sleep(1)




            else:
                self.logger('now dot:'+str(self.now_dot))

                deg = self.get_deg([np.cos(self.car_tf[2]),np.sin(self.car_tf[2])],
                                    self.rout[self.now_dot]-self.car_pos)
                self.logger(deg)
                dist = self.get_dist(self.rout[self.now_dot],self.car_pos) 
                self.logger(dist)

    
                request.linear = 0.0
                request.angular = deg
                self.response = self.motor_cmd_client.call_async(request)
                self.done_turning = False

            if self.now_dot == 1:
                while True:
                    self.logger("...")
                    time.sleep(1)
        else:
            print("wait turn"+"."*(self.count%5)+" "*5,end='\r')
            self.count += 1
            if self.response.done():
                self.done_turning = True
                #self.logger("done turn!")
                print("\ndone turn!")
                self.count = 0


def main(args=None):
    rclpy.init(args=args)
    print("slam navigation start")
    slam_navigation = slam_navigation_node()

    rclpy.spin(slam_navigation)

    slam_navigation.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
