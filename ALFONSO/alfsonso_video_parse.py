from PIL import Image
import os
import pyscreenshot as ImageGrab
import time
import alfonso_serial_communication
# grab fullscreen
while(1):
    ims = ImageGrab.grab()

    # save image file
    ims.save('fullscreen.png')
    #os.system("pwd")
    im = Image.open("fullscreen.png")
    ph = "white"
    red = 0
    green = 0
    blue = 0
    width = im.size[0]
    height = im.size[1]

    xfreq = 10
    yfreq = 100
    pixels = (im.size[0] * im.size[1]) / (xfreq * yfreq)
    for x in range(width):
        if x % xfreq == 0:
            for y in range(height):
                if y % yfreq == 0:
                    cordinate = a, s = x, y
                    red += im.getpixel(cordinate)[0]
                    green += im.getpixel(cordinate)[1]
                    blue += im.getpixel(cordinate)[2]
    red = red/(pixels *3)
    green = green/(pixels *3)
    blue = blue/(pixels *3)
    sd_red = red-((red+blue+green)/3)

    sd_green = green-((red+blue+green)/3)

    sd_blue = blue-((red+blue+green)/3)

    if(red > green and red > blue and sd_red > 1.5):
        ph = "red"
        alfonso_serial_communication.LEDS_RED()
    elif(green > red and green > blue and sd_green > 1.5):
        ph = "green"
        alfonso_serial_communication.LEDS_GREEN()
    elif(blue > red and blue > green and sd_blue > 1.5):
        ph = "blue"
        alfonso_serial_communication.LEDS_BLUE()
    elif((blue+green+red)/3 <10):
        ph = "black"
    else:
        ph = "white"
        alfonso_serial_communication.LEDS_WHITE()

    print(pixels)
    print(ph)
    print(sd_blue+sd_green+sd_red)
    print(red, "sd:", sd_red)
    print(green,"sd:", sd_green)
    print(blue,"sd:", sd_blue)
    os.system("rm fullscreen.png")
                
