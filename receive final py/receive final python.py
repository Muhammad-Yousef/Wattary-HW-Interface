import os
import paho.mqtt.client as mqtt

# This is the Subscriber
def on_connect(client, userdata, flags, rc):
  print("Connected with result code "+str(rc))
  client.subscribe("pi")
def on_message(client, userdata, msg):
  if msg.payload.decode() == "11":
    print("light bedroom on ")
  elif msg.payload.decode() == "12":
    print("light bedroom off")
  elif msg.payload.decode() == "13":
    print("light bathroom on ")
  elif msg.payload.decode() == "14":
    print("light bathroom off ")
  elif msg.payload.decode() == "15":
    print("light Hall on")
  elif msg.payload.decode() == "16":
    print("light Hall off ")
  elif msg.payload.decode() == "17":
    print("TV On")
  elif msg.payload.decode() == "18":
    print("Tv Off")
  elif msg.payload.decode() == "21":
    print("Coffe Machine On")
  elif msg.payload.decode() == "22":
    print("Coffe Machine Off")
  elif msg.payload.decode() == "99":
    os.system("fswebcam test99.jpeg")
    print "photo taken"
   # client.disconnect()
  print("  ")
client = mqtt.Client()
client.username_pw_set("incmrvjk", "EUVFYnYcv0Qv")
client.connect("m14.cloudmqtt.com", 11652, 60)


client.on_connect = on_connect
client.on_message = on_message

client.loop_forever()