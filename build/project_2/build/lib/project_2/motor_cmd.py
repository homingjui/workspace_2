import rclpy
import numpy as np
from rclpy.node import Node
from msg_manage.msg import Motor2
from geometry_msgs.msg import TwistStamped
from tf2_msgs.msg import TFMessage
from scipy.spatial.transform import Rotation
import time

class motor_cmd_node(Node):
    def __init__(self):
        super().__init__('motor_cmd_node')
        self.publisher_ = self.create_publisher(Motor2, 'motor_cmd', 10)
        self.create_subscription(TwistStamped,'slam_navigation',self.set_cmd,10)
        self.create_subscription(TFMessage,'tf',self.get_tf,10)

        self.turning = False
        self.car_tf = [0,0,0]
        self.done_turn_ang = 0
        self.start_ang = 0

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
        if self.turning:
            self.set_cmd(None)

    def set_cmd(self,data):
        motor_data = Motor2()
        if self.turning:
            if abs(self.done_turn_ang-self.car_tf[2])>1:
                self.logger("trun..."+str(self.done_turn_ang-self.car_tf[2]))
            else:
                self.logger("done turn")
                motor_data.speed_l = 0.0
                motor_data.speed_r = 0.0
                self.publisher_.publish(motor_data)
                self.turning = False
                while True:
                    self.logger("wait to start")
                    time.sleep(10)


        else :
            if data.twist.linear.x == 0:
                self.logger("truning")
                self.done_turn_ang = self.car_tf[2]+data.twist.angular.z
                self.turning = True
                if data.twist.angular.z < 0 :
                    motor_data.speed_l = 0.01
                    motor_data.speed_r = -0.01
                else:
                    motor_data.speed_l = -0.01
                    motor_data.speed_r = 0.01
                self.publisher_.publish(motor_data)

def main(args=None):
    rclpy.init(args=args)
    print("motor cmd start")
    motor_cmd = motor_cmd_node()

    rclpy.spin(motor_cmd)

    motor_cmd.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
