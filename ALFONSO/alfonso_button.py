import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)


def button1():
    GPIO.setup(23, GPIO.IN, pull_up_down=GPIO.PUD_UP)#Button to GPIO23
    button_state = GPIO.input(23)
    if button_state == True:
        print('Button Pressed...')
        return True
    else:
        x=1
        
