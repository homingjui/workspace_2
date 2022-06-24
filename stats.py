#! /usr/bin/python3
# Copyright (c) 2017 Adafruit Industries
# Author: Tony DiCola & James DeVito
#
# Permission is hereby granted, free of charge, to any person obtaining a copy
# of this software and associated documentation files (the "Software"), to deal
# in the Software without restriction, including without limitation the rights
# to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
# copies of the Software, and to permit persons to whom the Software is
# furnished to do so, subject to the following conditions:
#
# The above copyright notice and this permission notice shall be included in
# all copies or substantial portions of the Software.
#
# THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
# IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
# FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
# AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
# LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
# OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
# THE SOFTWARE.
# Portions copyright (c) NVIDIA 2019
# Portions copyright (c) JetsonHacks 2019

import time

import Adafruit_SSD1306   # This is the driver chip for the Adafruit PiOLED

from PIL import Image
from PIL import ImageDraw
from PIL import ImageFont

import subprocess


def get_network_interface_state(interface):
    return subprocess.check_output('cat /sys/class/net/%s/operstate' % interface, shell=True).decode('ascii')[:-1]


def get_ip_address(interface):
    if get_network_interface_state(interface) == 'down':
        return None
    cmd = "ifconfig %s | grep -Eo 'inet (addr:)?([0-9]*\.){3}[0-9]*' | grep -Eo '([0-9]*\.){3}[0-9]*' | grep -v '127.0.0.1'" % interface
    return subprocess.check_output(cmd, shell=True).decode('ascii')[:-1]


def get_cpu_usage():
    cmd = "top -bn1 | grep load | awk '{printf \"CPU: %.2f \", $(NF-2)}'"
    CPU = subprocess.check_output(cmd, shell=True)
    return CPU

def get_gpu_usage():
    GPU = 0.0
    with open("/sys/devices/gpu.0/load", encoding="utf-8") as gpu_file:
        GPU = gpu_file.readline()
        GPU = int(GPU)/10
    return GPU

disp = Adafruit_SSD1306.SSD1306_128_64(rst=None, i2c_bus=1, gpio=1)
disp.begin()
disp.clear()
disp.display()

width = disp.width
height = disp.height
image = Image.new('1', (width, height))

draw = ImageDraw.Draw(image)
draw.rectangle((0, 0, width, height), outline=0, fill=0)

padding = 0
top = padding
bottom = height-padding
x = 2
h = 12

#font = ImageFont.load_default()
font = ImageFont.truetype("/usr/share/fonts/truetype/ttf-bitstream-vera/Vera.ttf", size=11)
meow = ImageFont.truetype("/home/jetson/.local/share/fonts/MeowsNepilIllustratioRegular-owjVq.ttf", size=35)
meow2 = ImageFont.truetype("/home/jetson/.local/share/fonts/MeowsNepilIllustratioRegular-owjVq.ttf", size=29)
cat = "f"

while True:

    draw.rectangle((0, 0, width-1, height-1), outline=1, fill=0)

    cmd = "free -m | awk 'NR==2{printf \"Mem:%.0f%%\", $3*100/$2}'"
    MemUsage = subprocess.check_output(cmd, shell=True)
    cmd = "free -m | awk 'NR==3{printf \"Swp:%.0f%%\", $3*100/$2}'"
    Swap = subprocess.check_output(cmd, shell=True)
    cmd = "df -h | awk '$NF==\"/\"{printf \"Disk: %d/%s\", $3,$2}'"
    Disk = subprocess.check_output(cmd, shell=True)
    cmd = "cat /sys/devices/virtual/thermal/thermal_zone1/temp"
    temp = subprocess.check_output(cmd, shell=True)

    draw.text((x, top),       "eth0: " +
              str(get_ip_address('eth0')),  font=font, fill=255)
    # draw.text((x, top+8),     "wlan0: " + str(get_ip_address('wlan0')), font=font, fill=255)

    # draw.text((x, top+8),     "GPU:  " +"{:3.1f}".format(GPU)+" %", font=font, fill=255)
    draw.text((x, top+h), str(MemUsage.decode('utf-8'))+" "+str(Swap.decode('utf-8')), font=font, fill=255)
    draw.text((x, top+h*2), str(get_cpu_usage().decode('utf-8'))+" "+str(float(temp.decode('utf-8'))/1000)+"°C", font=font, fill=1)
    draw.text((x, top+h*3), str(Disk.decode('utf-8')), font=font, fill=255)
    
    string_width, string_height = font.getsize("GPU:")
    full_bar_width = width-(x+string_width)-1
    gpu_usage = get_gpu_usage()
    if gpu_usage == 0.0:
        gpu_usage = 3
    draw_bar_width = int(full_bar_width*(gpu_usage/100))
    draw.text((x, top+h*4),"GPU:", font=font, fill=255)
    draw.rectangle((x+string_width, top+2+h*4, x+string_width +
                    draw_bar_width, top-2+h*5), outline=0, fill=1)
    draw.text((x+string_width+draw_bar_width+1, top+1+h*3),"s", font=meow2, fill=255)

    if cat == "f":
        cat = "g"
    else:
        cat = "f"
    draw.text((100, 20), cat, font=meow, fill=255)

    imagef = image.rotate(180, Image.NEAREST, expand = 1)
    # Display image.
    # Set the SSD1306 image to the PIL image we have made, then dispaly
    disp.image(imagef)
    disp.display()
    # 1.0 = 1 second; The divisor is the desired updates (frames) per second
    time.sleep(1.0/4)
