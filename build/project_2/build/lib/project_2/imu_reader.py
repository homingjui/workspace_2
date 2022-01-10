import serial
import numpy as np
from struct import unpack 

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu



class Imu_reader(Node):
    def __init__(self):
        super().__init__('imu_reader')
        self.imu_pub = self.create_publisher(Imu, 'topic', 10)
        COM_PORT = '/dev/imu'
        BAUD_RATES = 921600
        self.ser = serial.Serial(COM_PORT, BAUD_RATES)

    def read_imu(self):
        data = self.ser.read()
        data_arr=[]
        if data == b'\xfc': ###### head with \xfc byte
            data_arr.append(data)
            data = self.ser.read()
            while data != b'\xfd':
                data_arr.append(data)
                data = self.ser.read()
            data_arr.append(data)
            
            
            if int.from_bytes(data_arr[2],"big") != len(data_arr)-8:
                #print("wronglength")
                return

            #print("read_len",int.from_bytes(data_arr[2],"big"))
            #print("arr len",len(data_arr)-8)

            if data_arr[1] == b'\x40':
                print("imu")
                gyro = b''.join(data_arr[7:7+4*4])
                gyro = unpack('4f',gyro)
                imu = Imu()
                imu.orientation.x = gyro[0]
                imu.orientation.x = gyro[1]
                imu.orientation.x = gyro[2]
                #print(imu)
    
                print("%.5f \t%.5f \t%.5f"% (gyro[0],gyro[1],gyro[2]))
                self.imu_pub.publish(imu)
        
            elif data_arr[1] == b'\x41':
                print("AHRS")
                gyro = b''.join(data_arr[7:7+4*4])
                gyro = unpack('4f',gyro)
                imu = Imu()
                #print(imu)

                print("%.5f \t%.5f \t%.5f"% (gyro[0],gyro[1],gyro[2]))
            '''
            elif data_arr[1] == b'\x42':
                #print("INS/GPS")
            elif data_arr[1] == b'\x58':
                #print("row data")
            else:
            #print("wrong data")
                continue
            '''

            #print()

def main(args=None):
    rclpy.init(args=args)
    imu_reader = Imu_reader()
    while rclpy.ok():
        imu_reader.read_imu()

    imu_reader.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

