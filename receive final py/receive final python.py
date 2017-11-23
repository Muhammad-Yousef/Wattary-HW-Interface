import paho.mqtt.client as mqtt

# This is the Subscriber

def on_connect(client, userdata, flags, rc):
  print("Connected with result code "+str(rc))
  client.subscribe("pi")

def on_message(client, userdata, msg):
  if msg.payload.decode() == "1":
    print("Yes!")
   # client.disconnect()
    
client = mqtt.Client()
client.username_pw_set("incmrvjk", "EUVFYnYcv0Qv")
client.connect("m14.cloudmqtt.com", 11652, 60)


client.on_connect = on_connect
client.on_message = on_message

client.loop_forever()

