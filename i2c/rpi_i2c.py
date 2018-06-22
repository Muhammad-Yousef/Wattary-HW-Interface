#RPi Pinouts

#I2C Pins 
#GPIO2 -> SDA
#GPIO3 -> SCL

#Import the Library Requreid 
import smbus
import time
import struct

# for RPI version 1, use "bus = smbus.SMBus(0)"
bus = smbus.SMBus(1)

# This is the address we setup in the Arduino Program
#Slave Address 1
address = 0x04

#Slave Address 2
address_2 = 0x05

#slave address 3
address_3 = 0x06

def writeNumber(value):
    bus.write_byte(address, value)
    bus.write_byte(address_2, value)
    bus.write_byte(address_3, value)

    # bus.write_byte_data(address, 0, value)
    return -1

def get_float(data, index):
    bytes = data[4*index:(index+1)*4]
    return struct.unpack('f', "".join(map(chr, bytes)))[0]

def readNumber():
    number = bus.read_byte(address)
    number1 = bus.read_byte_data(address_2, 1)
    number2 = bus.read_i2c_block_data(address_3, 1)
 
    print(number)
    print(number1)
    #print(number2)
    print(get_float(number2, 0))
    
    
while True:
	#Receives the data from the User
    data = raw_input("Enter the data to be sent : ")
    data_list = list(data)
    for i in data_list:
    	#Sends to the Slaves 
        writeNumber(int(ord(i)))
        time.sleep(.1)

    writeNumber(int(0x0A))
    readNumber()

#End of the Script

