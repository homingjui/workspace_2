import csv
import serial
import numpy as np
import time

with open('record_t.csv') as f:
    reader = csv.reader(f)
    data = np.array(list(reader),dtype=np.float)

COM_PORT = '/dev/arduino'
BAUD_RATES = 115200
ser = serial.Serial(COM_PORT, BAUD_RATES)

t=0.1

for i in data:
    ang = i[2]
    print(i[3])
    ang *= 1
    if ang==0 or ang>90 or ang<-90:
        print('skip',ang)
        time.sleep(t)
        continue
    ang += 90
    ang = np.uint8((ang/180)*255)
    print((i[2],ang))
    
    ser.readline()
    ser.write(ang.tobytes())
    #ser.write(ang.tobytes())
    time.sleep(t)
