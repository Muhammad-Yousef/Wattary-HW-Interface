import os
import paho.mqtt.client as mqtt
import RPi.GPIO as GPIO

GPIO.setmode(GPIO.BOARD)
GPIO.setup(11,GPIO.OUT)
GPIO.setup(12,GPIO.OUT)
GPIO.setup(13,GPIO.OUT)
GPIO.setup(15,GPIO.OUT)
GPIO.setup(16,GPIO.OUT)

def on_connect(client, userdata, flags, rc):
  print("Connected with result code "+str(rc))
  client.subscribe("pi")

def on_message(client, userdata, msg):
  if msg.payload.decode() == "11":
    print("light bedroom on ")
    GPIO.output(11,1)
    print("switched on")
    
  elif msg.payload.decode() == "12":
    print("light bedroom off")
    GPIO.output(11,0)
    print("switched off")

  elif msg.payload.decode() == "13":
    print("light bathroom on ")
    GPIO.output(12,1)
    print("switched on")
    
  elif msg.payload.decode() == "14":
    print("light bathroom off ")
    GPIO.output(12,0)
    print("switched off")

  elif msg.payload.decode() == "15":
    print("light Hall on")
    GPIO.output(13,1)
    print("switched on")
    
  elif msg.payload.decode() == "16":
    print("light Hall off ")
    GPIO.output(13,0)
    print("switched off")
    
  elif msg.payload.decode() == "17":
    print("TV On")
    GPIO.output(15,1)
    print("switched on")
    
  elif msg.payload.decode() == "18":
    print("Tv Off")
    GPIO.output(15,0)
    print("switched off")
    
  elif msg.payload.decode() == "21":
    print("Coffe Machine On")
    GPIO.output(16,1) 
    print("switched on")    
    
  elif msg.payload.decode() == "22":
    print("Coffe Machine Off")
    GPIO.output(16,0)
    print("switched off")
    
  elif msg.payload.decode() == "99":
    os.system("fswebcam test99.jpeg")
    print "photo taken"
   
  print("  ")
  
client = mqtt.Client()
client.username_pw_set("incmrvjk", "EUVFYnYcv0Qv")
client.connect("m14.cloudmqtt.com", 11652, 60)


client.on_connect = on_connect
client.on_message = on_message

client.loop_forever()
