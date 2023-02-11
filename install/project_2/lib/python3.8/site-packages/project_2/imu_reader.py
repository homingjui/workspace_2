import serial
import numpy as np
from struct import unpack 
from scipy.spatial.transform import Rotation
from scipy.constants import g as g_constant
import time
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Imu
from geometry_msgs.msg import TransformStamped
from visualization_msgs.msg import Marker,MarkerArray
from tf2_ros import TransformBroadcaster


class Imu_reader(Node):
    def __init__(self):
        super().__init__('imu_reader')
        #self.imu_pub = self.create_publisher(Imu, 'imu', 10)
        #self.arrow_pub = self.create_publisher(MarkerArray, 'arrow_marker', 10)
        self.tf_broadcaster = TransformBroadcaster(self)
        COM_PORT = '/dev/imu'
        BAUD_RATES = 921600
        self.ser = serial.Serial(COM_PORT, BAUD_RATES)

        self.offset = None
        self.roat = None


    def send_tf(self,fram_id,trans=[0.0,0.0,0.0],xyzw=[0.0,0.0,0.0,0.0],xyz=None):

        if(xyz):
            xyz=list(xyz)
            xyz[2]+=np.pi
            xyz[2]=-xyz[2]
            xyz[1]=-xyz[1]
            xyz[0]=-xyz[0]
            xyz = Rotation.from_rotvec(xyz)
            xyzw = Rotation.as_quat(xyz)
            xyzw[0],xyzw[1],xyzw[2]=xyzw[2],xyzw[0],xyzw[1]


        tf = TransformStamped()
        tf.header.stamp = self.get_clock().now().to_msg()
        tf.header.frame_id = "world"
        tf.child_frame_id = fram_id
        tf.transform.translation.x  = trans[0]
        tf.transform.translation.y  = trans[1]
        tf.transform.translation.z  = trans[2]
        tf.transform.rotation.x = xyzw[2]
        tf.transform.rotation.y = xyzw[1]
        tf.transform.rotation.z = xyzw[0]
        tf.transform.rotation.w = xyzw[3]

        self.tf_broadcaster.sendTransform(tf)
    
    def send_arrow(self,frame_id,length,trans=[0.0,0.0,0.0]):
        print(length);
        length[2]=-length[2]
        length[1],length[2]=length[2],length[1]

        markerArray = MarkerArray()
        for i in range(3):
            marker = Marker()
            marker.header.frame_id = "/world"
            marker.header.stamp = self.get_clock().now().to_msg()
            marker.id = i
            marker.type = 0
            marker.action = 0
            marker.pose.position.x = trans[0]
            marker.pose.position.y = trans[1]
            marker.pose.position.z = trans[2]
            roat = np.array([0.0,0.0,0.0,1.0])
            roat[i] = 1.0
            roat_o = roat*0.70710678
            marker.pose.orientation.x = roat_o[0]
            marker.pose.orientation.y = roat_o[1]
            marker.pose.orientation.z = roat_o[2]
            marker.pose.orientation.w = roat_o[3]
            init_l = 0.1
            marker.scale.x = length[i]+np.sin(self.roat[i])*9.8
            marker.scale.y = init_l
            marker.scale.z = init_l
            marker.color.a = 1.0
            marker.color.r = roat[0]
            marker.color.g = roat[2]
            marker.color.b = roat[1]

            markerArray.markers.append(marker)

        self.arrow_pub.publish(markerArray)


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


            if len(data_arr)<3 or (int.from_bytes(data_arr[2],"big") != len(data_arr)-8):
                #print("wronglength")
                return

            #print("read_len",int.from_bytes(data_arr[2],"big"))
            #print("arr len",len(data_arr)-8)


            if data_arr[1] == b'\x41':
                print("AHRS")

                #rpy_acc = b''.join(data_arr[ 7 : 7+4*3 ])
                #rpy_acc = list(np.array(unpack('3f',rpy_acc))/10.0)
                #self.send_tf('RPY_acc',xyz=rpy_acc)

                #rpy = b''.join(data_arr[ 7+12 : 7+12+4*3 ])
                #rpy = unpack('3f',rpy)
                #self.send_tf('RPY',xyz=rpy)

                q1_4 = b''.join(data_arr[ 7+24 : 7+24+4*4 ])
                q1_4 = unpack('4f',q1_4)
                self.roat=Rotation.from_quat(q1_4).as_rotvec()
                self.send_tf('imu',xyzw=q1_4)


            elif data_arr[1] == b'\x40':
                #print("imu")
                acc = b''.join(data_arr[ 7+12 : 7+12+4*3 ])
                acc = list(np.array(unpack('3f',acc)))
                #self.send_arrow('acc',acc)

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

