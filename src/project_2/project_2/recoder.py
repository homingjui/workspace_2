import rclpy
import numpy as np
from rclpy.node import Node
import csv
import time
from geometry_msgs.msg import Twist
from msg_manage.msg import Vehicle

class Recoder(Node):
    def __init__(self):
        super().__init__('recoder')
        self.create_subscription(Vehicle, 'v2x', self.get_v2x, 0)
        self.create_subscription(Twist, 'motor_cmd', self.get_cmd, 0)

        self.car_pos = None
        self.car_tf = None

        self.row = []
        self.t = 0
    

    def get_v2x(self,data):
        if data.header.frame_id == 'UGV':
            if self.car_tf and (abs(self.car_tf-(data.heading/180)*np.pi)>np.pi/4):
                return
            self.car_pos = [data.position.z,data.position.x]
            self.car_tf = (data.heading/180)*np.pi

    def get_cmd(self,data):
        if self.car_pos and self.car_tf:
            self.row.extend([[self.car_pos[0],
                             self.car_pos[1],
                             data.angular.x,
                             time.time()-self.t]])
            print((len(self.row),self.row[-1]))
            print(time.time()-self.t)
            self.t=time.time()

    def save(self):
        with open('record.csv', 'w') as f:
            writer = csv.writer(f)
            writer.writerows(self.row)



def main(args=None):
    rclpy.init(args=args)
    recoder = Recoder()

    try:
        rclpy.spin(recoder)
    except KeyboardInterrupt:
        recoder.save()
        print("!!!")


    recoder.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

