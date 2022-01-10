import serial
import numpy as np

COM_PORT = '/dev/ublox_gps'
BAUD_RATES = 9600
ser = serial.Serial(COM_PORT, BAUD_RATES)

while True:
    data = ser.readline().decode("utf-8") 
    data = data.split(",")
    status = data[0]
    #print(status)
    
    if not status == "$GNGGA":
        continue

    print(data)
    
    '''
    if not data[2]:
        pub.publish(gps)
        rospy.loginfo("no gps data")
        continue

    gps.latitude=0
    gps.longitude=0
    gps.fix_code=0
    latitudedm = data.split(",")[2]
    longitudedm = data.split(",")[4]

    #latitudedm = "2353.92083"
    #longitudedm = "12132.60397"

    fix_code = int(data.split(",")[6])
    #rospy.loginfo(np.float64(latitudedm[0:2])+np.float64(latitudedm[2:])/60)
    latitude = np.float64(latitudedm[0:2])+np.float64(latitudedm[2:])/60
    longitude = np.float64(longitudedm[0:3])+np.float64(longitudedm[3:])/60

    gps.latitude=latitude
    gps.longitude=longitude
    gps.fix_code=fix_code
    '''
