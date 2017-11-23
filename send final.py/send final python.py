import paho.mqtt.client as mqtt
import time

data =1

while True:
    Print(data)
    try:
        client = mqtt.client()
        client.username_pw_set("incmrvjk","EUVFYnYcv0Qv")
        client.connect("m14.cloudmqtt.com", 11652, 60)

        client.publish("pi", data)
        time.sleep(1)

     except keyboardInterrupt:
         Print("end")
         client.disconnect()
                    
