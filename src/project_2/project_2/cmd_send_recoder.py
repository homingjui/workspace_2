import rclpy
import numpy as np
from rclpy.node import Node
import csv
import time
from geometry_msgs.msg import Twist
from msg_manage.msg import Vehicle
from tf2_msgs.msg import TFMessage
import serial


class Recoder(Node):
    def __init__(self):
        super().__init__('recoder')
        self.create_subscription(Twist, 'motor_cmd', self.get_cmd, 0)
        self.create_subscription(TFMessage,'tf',self.get_tf,0)

        COM_PORT = '/dev/arduino'
        BAUD_RATES = 115200
        self.ser = serial.Serial(COM_PORT, BAUD_RATES)
        self.ser.flushInput()


        self.row = []
        self.car_pos=None
        self.t = 0


    def get_tf(self,data):
        for i in data.transforms:
            if i.child_frame_id == "laser":
                self.car_pos = [i.transform.translation.x,
                                i.transform.translation.y]



    def get_cmd(self,data):
        if not self.car_pos:
            print('wait pos')
            return
        ang = data.angular.x
        ang = max(-60,ang)
        ang = min(60,ang)
        ang += 90
        ang = np.uint8((ang/180)*255)
        self.ser.readline()
        self.ser.write(ang.tobytes())

        self.row.extend([[self.car_pos[0],
                          self.car_pos[1],
                          data.angular.x,
                          time.time()-self.t]])
        print((len(self.row),self.row[-1]))
        self.t=time.time()
        self.ser.flushInput()

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

