import rclpy
import numpy as np
from rclpy.node import Node
from msg_manage.msg import Motor2
from msg_manage.srv import TwistSrv
from tf2_msgs.msg import TFMessage
from scipy.spatial.transform import Rotation
import time
from rclpy.callback_groups import MutuallyExclusiveCallbackGroup
from rclpy.executors import MultiThreadedExecutor

class motor_cmd_node(Node):
    def __init__(self):
        super().__init__('motor_cmd_node')

        self.callback_group = MutuallyExclusiveCallbackGroup()
        self.srv = self.create_service(TwistSrv, 'motor_cmd_servise', 
                                       self.set_cmd, callback_group=self.callback_group)

        self.publisher_ = self.create_publisher(Motor2, 'motor_cmd', 10)
        self.create_subscription(TFMessage,'tf',self.get_tf,10)

        self.car_tf = [0,0,0]
        self.done_turn_ang = 0
        self.start_ang = 0
        self.turn_d = 0

    def logger(self,data):
        self.get_logger().info(str(data))
    
    def get_tf(self,data):
        for i in data.transforms:
            if i.child_frame_id == "base_footprint":
                tfx = i.transform.rotation.x
                tfy = i.transform.rotation.y
                tfz = i.transform.rotation.z
                tfw = i.transform.rotation.w
                rot = Rotation.from_quat([tfx, tfy, tfz, tfw])
                self.car_tf = np.rad2deg(rot.as_euler('xyz'))
                #self.logger(self.car_tf)

    def set_cmd(self, data, response):
        motor_data = Motor2()
        if data.linear == 0 and data.angular == 0:
            self.logger("stop")
            motor_data.speed_l = 0.0
            motor_data.speed_r = 0.0
            self.publisher_.publish(motor_data)

        elif data.linear == 0:
            self.logger("turning")
            
            self.turn_d = 0
            self.done_turn_ang = self.car_tf[2]+data.angular
            if self.car_tf[2] > 0 :
                if self.done_turn_ang > 180:
                    self.done_turn_ang -= 360
            else:
                if self.done_turn_ang < -180:
                    self.done_turn_ang += 360

            self.turning = True
            if data.angular < 0 :
                motor_data.speed_l = 0.01
                motor_data.speed_r = -0.01
            else:
                motor_data.speed_l = -0.01
                motor_data.speed_r = 0.01
            self.publisher_.publish(motor_data)
            
            self.logger("trun..."+str(self.done_turn_ang-self.car_tf[2])+" "
                        +str(self.done_turn_ang)+" "
                        +str(self.car_tf[2]))
            last_d = self.car_tf[2]
            while abs(self.done_turn_ang-self.car_tf[2])>self.turn_d*1.5:
                if last_d == self.car_tf[2]:
                    continue
                self.turn_d = max(self.turn_d,abs(last_d-self.car_tf[2]))
                print("trun..."+str(self.done_turn_ang-self.car_tf[2])+" "
                        +str(self.done_turn_ang)+" "
                        +str(self.car_tf[2])+" "
                        +str(self.turn_d),end='\t\t\r')
                last_d = self.car_tf[2]
                
            #self.logger("done turn")
            print("\ndone turn")
            motor_data.speed_l = 0.0
            motor_data.speed_r = 0.0
            self.publisher_.publish(motor_data)
            response.result = True
            return response
        else:
            kp = 1/20
            p = 0.05*abs(data.angular)*kp
            if data.angular > 0 :
                self.logger("running L")
                motor_data.speed_l = data.linear - p
                motor_data.speed_r = data.linear + p
            else:
                self.logger("running R")
                motor_data.speed_l = data.linear + p
                motor_data.speed_r = data.linear - p
            self.publisher_.publish(motor_data)
            return response


def main(args=None):
    rclpy.init(args=args)
    print("motor cmd start")
    motor_cmd = motor_cmd_node()

    #rclpy.spin(motor_cmd)
    #motor_cmd.destroy_node()

    executor = MultiThreadedExecutor()
    executor.add_node(motor_cmd)

    try:
        executor.spin()
    finally:
        executor.shutdown()
        motor_cmd.destroy_node()
    
    rclpy.shutdown()

if __name__ == '__main__':
    main()
