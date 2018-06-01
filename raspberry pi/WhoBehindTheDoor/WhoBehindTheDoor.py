import os
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BOARD)
GPIO.setup(23,GPIO.IN)
while True:
    if(GPIO.input(23) == True ):
        os.system("fswebcam tiiit.jpeg")
        print "photo taken"