import rclpy
import numpy as np
from rclpy.node import Node
from msg_manage.msg import Motor2
from sensor_msgs.msg import Joy

import time


class Joy_cmd(Node):
    def __init__(self):
        super().__init__('joy_cmd')
        self.joy_pub = self.create_publisher(Motor2, 'motor_cmd', 0)
        self.create_subscription(Joy,'joy',self.get_joy,0)

    
    def get_joy(self,data):
        if data.buttons[1]==0:
            return
        motor_data = Motor2()
        
        joy_x = float(data.axes[2])
        joy_x -= 500
        joy_x /= 5000

        joy_y = float(data.axes[0])
        joy_y -= 500
        joy_y /= 50000
        joy_y *= 5
        
        #print((joy_x,joy_y))

        motor_data.speed_l = joy_x+joy_y
        motor_data.speed_r = joy_x-joy_y
        #print(motor_data)
        self.joy_pub.publish(motor_data)



def main(args=None):
    rclpy.init(args=args)
    joy_cmd = Joy_cmd()
    rclpy.spin(joy_cmd)

    joy_cmd.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
