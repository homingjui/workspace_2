import sys
from std_msgs.msg import Header
from sensor_msgs_py import point_cloud2

from sensor_msgs.msg import Image,PointCloud2,PointField
import rclpy
from rclpy.node import Node
import numpy as np
from time import time,sleep
from array import array

class ImgProcessor(Node):

    def __init__(self):
        super().__init__('img_processor')
        self.create_subscription(Image,'depth_img_pub',self.get_img,1)
        print("starting img server node")

        self.id_img_pub = self.create_publisher(Image, 'id_img', 1)
        self.gray_img_pub = self.create_publisher(Image, 'gray_img', 1)
        self.pcl2_pub = self.create_publisher(PointCloud2, 'pcl2', 1)

        self.color_img = ""

    def get_img(self,data):
        if data.header.frame_id == '_id':
            self.id_img_pub.publish(data)
            return
        if data.header.frame_id == '_img':
            self.color_img = np.array(data.data,dtype=np.uint8).reshape(data.height,data.width,4)
            return
        if data.header.frame_id == '_depth':
            self.gray_img_pub.publish(data)
            return
        if self.color_img == "":
            return
        if data.header.frame_id == '_normals':
            
            t0 = time()
            my_pcl2 = PointCloud2()
            my_pcl2.header = data.header
            my_pcl2.header.frame_id = 'base_cam'

            my_pcl2.height = data.height*data.width
            my_pcl2.width = 1
            my_pcl2.fields = [PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
                              PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
                              PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
                              PointField(name='rgb', offset=12, datatype=PointField.FLOAT32, count=1)]
            my_pcl2.is_bigendian = False
            my_pcl2.point_step = 16
            my_pcl2.row_step = my_pcl2.height*my_pcl2.point_step
            my_pcl2.is_dense = True
            
            vfov = (40.0/180.0)*np.pi
            hfov = np.arctan(np.tan(vfov)*(1/(data.width/data.height)))
            pcl2_xyz = np.zeros((data.height,data.width,3),dtype=np.float32)
            w_deg, h_deg = np.meshgrid(np.linspace(-vfov, vfov, data.width), 
                                       np.linspace(-hfov, hfov, data.height))
            pcl2_xyz[:,:,0],pcl2_xyz[:,:,1] = abs(pcl2_xyz[:,:,0]),abs(pcl2_xyz[:,:,1])
            #pcl2_xyz[:,:,2] = np.frombuffer(data.data,dtype=np.float32).reshape(data.height,data.width)
            get_img = np.array(data.data,dtype=np.float32).reshape(data.height,data.width,4)
            get_r = (get_img[:,:,0]*256 + get_img[:,:,1])/65
            
            
            pcl2_xyz[:,:,2] = -(np.sin(h_deg)*get_r)
            pcl2_xyz[:,:,1] = np.cos(h_deg)*get_r

            pcl2_xyz[:,:,0] = np.cos(w_deg)*pcl2_xyz[:,:,1]
            pcl2_xyz[:,:,1] = -(np.sin(w_deg)*pcl2_xyz[:,:,1])

            err = get_r/pcl2_xyz[:,:,0]
            pcl2_xyz[:,:,0] *= err
            pcl2_xyz[:,:,1] *= err
            

            
            pcl2_xyz_buffer = np.frombuffer(pcl2_xyz,dtype=np.uint8).reshape(data.height,data.width,3,4)

            pcl2_rgb = np.zeros((data.height,data.width,1,4),dtype=np.uint8)
            pcl2_rgb[:,:,0,0] = self.color_img[:,:,2]
            pcl2_rgb[:,:,0,1] = self.color_img[:,:,1]
            pcl2_rgb[:,:,0,2] = self.color_img[:,:,0]

            pcl2_xyz_buffer = pcl2_xyz_buffer.reshape(-1,3,4)
            pcl2_rgb = pcl2_rgb.reshape(-1,1,4)

            

            my_pcl2_data = np.hstack((pcl2_xyz_buffer,pcl2_rgb))
            my_pcl2_data = my_pcl2_data.reshape(-1)
            #my_pcl2.data = my_pcl2_data.tobytes()
            
            my_pcl2_data = array('B', my_pcl2_data.tobytes())
            
            
            my_pcl2.data = my_pcl2_data
            self.pcl2_pub.publish(my_pcl2)
            """
            rate = 30
            moving = True
            width = 100
            height = 100

            header = Header()
            header.frame_id = 'odom'

            dtype = PointField.FLOAT32
            point_step = 16
            fields = [PointField(name='x', offset=0, datatype=dtype, count=1),
                      PointField(name='y', offset=4, datatype=dtype, count=1),
                      PointField(name='z', offset=8, datatype=dtype, count=1),
                      PointField(name='intensity', offset=12, datatype=dtype, count=1)]
            header.stamp = self.get_clock().now().to_msg()
            x, y = np.meshgrid(np.linspace(-2, 2, width), np.linspace(-2, 2, height))
            z = 0.5 * np.sin(2*x) * np.sin(2*y)
            points = np.array([x, y, z, z]).reshape(4, -1).T
            pc2_msg = point_cloud2.create_cloud(header, fields, points)
            self.pcl2_pub.publish(pc2_msg)
            """

            

        


def main(args=None):
    rclpy.init()

    Img_Processor = ImgProcessor()

    rclpy.spin(Img_Processor)

    Img_Processor.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
