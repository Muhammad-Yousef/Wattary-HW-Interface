#RPi Pinouts

#I2C Pins 
#GPIO2 -> SDA
#GPIO3 -> SCL

#Import the Library Requreid 
import smbus
import time
import struct
import os
import paho.mqtt.client as mqtt
import RPi.GPIO as GPIO
import upload
from sendData import *


GPIO.setmode(GPIO.BOARD)

GPIO.setup(11,GPIO.OUT) #Bedroom Light
GPIO.setup(12,GPIO.OUT)
GPIO.setup(13,GPIO.OUT)
GPIO.setup(15,GPIO.OUT) #Coffee Machine
GPIO.setup(16,GPIO.OUT) #Water Tap
GPIO.setup(18,GPIO.OUT)
GPIO.setup(19,GPIO.OUT)

GPIO.setup(21,GPIO.OUT) #Fridge on Model
GPIO.setup(22,GPIO.OUT) #Real Light
#GPIO.setup(23,GPIO.OUT) #For TV on Model
#GPIO.setup(24,GPIO.OUT) #For AC on Model
#GPIO.setup(26,GPIO.OUT) #For AC on Model
#time.sleep(30)

# for RPI version 1, use "bus = smbus.SMBus(0)"
bus = smbus.SMBus(1)

# This is the address we setup in the Arduino Program
#Slave Address 1
#address = 0x04

#Slave Address 2
address = 0x05

#slave address 3
#address = 0x06

def on_connect(client, userdata, flags, rc):
  print("Connected with result code "+str(rc))
  client.subscribe("pi")




def writeNumber(value):
    print(value)
    bus.write_byte(address, value)
    
    if value == 97:
       bus.write_byte(address, value)
       
    elif value == 98: 
       bus.write_byte(address, value)
       
    elif value == 99:
       bus.write_byte(address, value)

    elif value == 100: 
       bus.write_byte(address, value)
       
    elif value == 101:
       bus.write_byte(address, value)

    elif value == 102: 
       bus.write_byte(address, value)
       
    elif value == 103:
       bus.write_byte(address, value)

    elif value == 104: 
       bus.write_byte(address, value)
       
    elif value == 105:
       bus.write_byte(address, value)   

    elif value == 106: 
       bus.write_byte(address, value)
       
    elif value == 107:
       bus.write_byte(address, value)

    elif value == 108: 
       bus.write_byte(address, value)
       
    elif value == 109:
       bus.write_byte(address, value)

    elif value == 110: 
       bus.write_byte(address, value)
       
    elif value == 111:
       bus.write_byte(address, value)

    elif value == 112: 
       bus.write_byte(address, value)
       
    elif value == 113:
       bus.write_byte(address, value)

    elif value == 114: 
       bus.write_byte(address, value)
       
    elif value == 115:
       bus.write_byte(address, value)

    elif value == 116: 
       bus.write_byte(address, value)
       
    elif value == 117:
       bus.write_byte(address, value)
       
    elif value == 118:
       bus.write_byte(address, value)
       
    elif value == 119: 
       bus.write_byte(address, value)
       
    elif value == 120:
       bus.write_byte(address, value)

    elif value == 121: 
       bus.read_byte(address, value)
       
    elif value == 122:
       bus.write_byte(address_2, value)   

    elif value == 65:
       bus.write_byte(address_3, value)   
        
    elif value == 66: 
       bus.write_byte(address_3, value)
       
    elif value == 67:
       bus.write_byte(address_3, value)   
        
    elif value == 68: 
       bus.write_byte(address_3, value)
       
    elif value == 69:
       bus.write_byte(address_3, value) 

    # bus.write_byte_data(address, 0, value)
    return -1
        
def on_message(client, userdata, msg):
  if msg.payload.decode() == "39":
    value = 97 
    bus.write_byte(address, value)
    print(" TV(on) ")
    
  elif msg.payload.decode() == "11":
    print(" Bedroom Light switched ON ")
    GPIO.output(11,1)
    print(" Real Light switched ON ")
    GPIO.output(22, 1)

  
  elif msg.payload.decode() == "12":
    print(" Bedroom Light switched OFF ")
    GPIO.output(11,0)
    print(" Real Light switched OFF ")
    GPIO.output(22, 0)
    
    
  elif msg.payload.decode() == "13":
    print("light bathroom switched on ")
    GPIO.output(12,1)
    
    
  elif msg.payload.decode() == "14":
    print("light bathroom switched off ")
    GPIO.output(12,0)
    

  elif msg.payload.decode() == "15":
    print("light Hallway switched on")
    GPIO.output(13,1)
     
    
  elif msg.payload.decode() == "16":
    print("light Hallway switched off")
    GPIO.output(13,0)
    
    
  elif msg.payload.decode() == "21":
    print(" Coffee Machine switched ON ")
    GPIO.output(15,1)
    print(" Fridge on Model switched ON ")
    GPIO.output(21, 1)
    
    
  elif msg.payload.decode() == "22":
    print(" Coffee Machine switched OFF ")
    GPIO.output(15,0)
    print(" Fridge on Model switched OFF ")
    GPIO.output(21, 0)

  elif msg.payload.decode() == "23":
    print("Kitchen switched On")
    GPIO.output(18,1) 
    
    
  elif msg.payload.decode() == "24":
    print("Kitchen switched off")
    GPIO.output(18,0)

 
  elif msg.payload.decode() == "25":
    GPIO.output(19,1) 
    print("living room switched on")
    
    
  elif msg.payload.decode() == "26":
    GPIO.output(19,0)
    print("living room switched Off")
    
    
  elif msg.payload.decode() == "110":
    os.system("fswebcam test199.jpeg")
    print "photo taken"
    flag, url = upload.upload_image("/home/pi/Desktop/Wattary/test199.jpeg")
    if flag == 101:
      print url
      send_url(url)
    elif flag == 102:
      error = url
      print error
    
  elif msg.payload.decode() == "40":
    value = 98
    bus.write_byte(address, value)
    print(" TV(off) ")
    
  elif msg.payload.decode() == "41":
    value = 99
    bus.write_byte(address, value)
    print(" TV(1) ")
    
  elif msg.payload.decode() == "42":
    value = 100
    bus.write_byte(address, value)
    print(" TV(2) ")

  elif msg.payload.decode() == "43":
    value = 101
    bus.write_byte(address, value)
    print(" TV(3) ")
    
  elif msg.payload.decode() == "44":
    value = 102
    bus.write_byte(address, value)
    #For Float
    number2 = bus.read_i2c_block_data(address, 1)
    print(get_float(number2, 0))
    #For Integer
    number = bus.read_byte(address)
    print(number)
    print(" TV(4) ")

    
    
  elif msg.payload.decode() == "45":
    value = 103
    bus.write_byte(address, value)
    print(" TV(5) ")


    
  elif msg.payload.decode() == "46":
    value = 104
    bus.write_byte(address, value)
    print(" TV(6) ")

    
    
  elif msg.payload.decode() == "47":
    value = 105
    bus.write_byte(address, value)
    print(" TV(7) ")

    
  elif msg.payload.decode() == "48":
    value = 106
    bus.write_byte(address, value)
    print(" TV(8) ")


  elif msg.payload.decode() == "49":
    value = 107
    bus.write_byte(address, value)
    print(" TV(9) ")

    
    
  elif msg.payload.decode() == "50":
    value = 108
    bus.write_byte(address, value)
    print(" TV(10) ")


 
  elif msg.payload.decode() == "51":
    value = 109
    bus.write_byte(address, value)
    print(" TV(Mute) ")

    
    
  elif msg.payload.decode() == "52":
    value = 110
    bus.write_byte(address, value)
    print(" TV(cH Up) ")

    
    
  elif msg.payload.decode() == "53":
    value = 111
    bus.write_byte(address, value)
    print(" TV(cH Dn) ")

     
  elif msg.payload.decode() == "54":
    value = 112
    bus.write_byte(address, value)
    print(" TV(vol Up) ")


     
  elif msg.payload.decode() == "55":
    value = 113
    bus.write_byte(address, value)
    print(" TV(vol Dn) ")

     
  elif msg.payload.decode() == "63":
    value = 114
    bus.write_byte(address, value)
    print(" TV(ok) ")

 
   
  elif msg.payload.decode() == "57":
    value = 115
    bus.write_byte(address, value)
    print(" Air Cond.(on) ")


     
  elif msg.payload.decode() == "58":
    value = 116
    bus.write_byte(address, value)
    print(" Air Cond.(off) ")


      
  elif msg.payload.decode() == "59":
    value = 117
    bus.write_byte(address, value)
    print(" Air Cond.(+) ")
    
  
   
  elif msg.payload.decode() == "60":
    value = 118
    bus.write_byte(address, value)
    print(" Air Cond.(-) ")
  
   
  elif msg.payload.decode() == "61":
    value = 119
    bus.write_byte(address, value)
    print(" Air Cond.(fan) ")



  elif msg.payload.decode() == "62":
    value = 120
    bus.write_byte(address, value)
    print(" Air Cond.(swing) ")


  elif msg.payload.decode() == "62":
    value = 121
    bus.read_byte(address, value)
    print(" Air Cond.(swing) ")


  elif msg.payload.decode() == "27":
    value = 122
    bus.write_byte(address, value)
    print(" fridge.(on) ")


  elif msg.payload.decode() == "28":
    value = 65
    bus.write_byte(address, value)
    print(" fridge.(off) ")



  elif msg.payload.decode() == "29":
    value = 66
    bus.write_byte(address, value)
    print(" curtains.(on) ")


  elif msg.payload.decode() == "30":
    value = 67
    bus.write_byte(address, value)
    print(" curtains.(off) ")  


  elif msg.payload.decode() == "31":
    value = 68
    bus.write_byte(address, value)
    print(" call elevator ")

  elif msg.payload.decode() == "100":
    #value = 69
    #bus.write_byte(address, value)
    print(" Water Tap switched ON ")
    GPIO.output(16, 1)


  elif msg.payload.decode() == "101":
    #value = 70
    #bus.write_byte(address, value)
    print(" Water Tap switched OFF ")
    GPIO.output(16, 0)


  elif msg.payload.decode() == "102":
    value = 71
    bus.write_byte(address, value)
    print(" measure curtains ")
    number = bus.read_byte(address)
    print(number)


  elif msg.payload.decode() == "103":
    value = 72
    bus.write_byte(address, value)
    print(" measure water tap ")
    number = bus.read_byte(address)
    print(number)
 



    
  print(msg.payload.decode())
  print("  ")

def get_float(data, index):
    bytes = data[4*index:(index+1)*4]
    return struct.unpack('f', "".join(map(chr, bytes)))[0]

def readNumber():
   # number = bus.read_byte(address)
   # number1 = bus.read_byte_data(address_2, 1)
    number2 = bus.read_i2c_block_data(address, 1)
 
    #print(number)
    #print(number1)
    #print(number2)
      
    data2 = number2
    print(get_float(data2, 0))

client = mqtt.Client()
client.username_pw_set("incmrvjk", "EUVFYnYcv0Qv")
client.connect("m14.cloudmqtt.com", 11652, 60)


client.on_connect = on_connect
client.on_message = on_message

try:
  client.loop_forever()

except KeyboardInterrupt:
  GPIO.cleanup()

finally:
  GPIO.cleanup()





#while True:
	#Receives the data from the User
 #   data = raw_input("Enter the data to be sent : ")
    
  #  data_list = list(data)
   # for i in data_list:
    #	#Sends to the Slaves 
     #   writeNumber(int(ord(i)))
      #  time.sleep(.1)
  
 # writeNumber(int(0x0A))
    #readNumber()
    
  


#End of the Script


    
