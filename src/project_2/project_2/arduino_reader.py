import serial
import numpy as np

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Joy
import time


class Arduino_reader(Node):
    def __init__(self):
        super().__init__('arduino_reader')
        self.joy_pub = self.create_publisher(Joy, 'joy', 10)
        COM_PORT = '/dev/arduino'
        BAUD_RATES = 115200
        self.ser = serial.Serial(COM_PORT, BAUD_RATES)
        self.ser.readline()

        self.hz = 10
        self.t = time.time()

    def read_arduino(self):
        data = self.ser.readline().decode("utf-8")
        data = data.split(",")[:-1]
        data_axes = np.array(data[:4],dtype=np.float32)
        data_but = np.array(data[4:],dtype=np.int32)

        joy = Joy()
        joy.header.stamp = self.get_clock().now().to_msg()
        joy.header.frame_id = "joy"

        
        joy.axes = list(map(float,data_axes))
        joy.buttons = list(map(int,data_but))

        if time.time()-self.t > 1/self.hz:
            self.joy_pub.publish(joy)
            self.t=time.time()


def main(args=None):
    rclpy.init(args=args)
    arduino_reader = Arduino_reader()
    while rclpy.ok():
        arduino_reader.read_arduino()

    arduino_reader.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

