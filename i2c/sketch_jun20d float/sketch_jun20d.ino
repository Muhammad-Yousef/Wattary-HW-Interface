/*
I2C Pinouts
SDA -> A4
SCL -> A5
*/
#include <stdlib.h>

//Import the library required 
#include <Wire.h>

#define FLOATS_SENT 2
float temperature = 10.5;
float data[FLOATS_SENT];

//Slave Address for the Communication
#define SLAVE_ADDRESS 0x06

char number[50];
int state = 0;

//Code Initialization
void setup() {
  // initialize i2c as slave
  Serial.begin(9600);
  
  data[0] = temperature;
  
  Wire.begin(SLAVE_ADDRESS);
 // define callbacks for i2c communication
  Wire.onReceive(receiveData);
  Wire.onRequest(sendData);
}

void loop() {
  delay(100);
} // end loop

// callback for received data
void receiveData(int byteCount){
  int i = 0;
  while(Wire.available()) { 
    number[i] = Wire.read();
    i++;
  }
  number[i] = '\0';
  Serial.print(number);
}  // end while

// callback for sending data
void sendData(){
  

   Wire.write((byte*) &temperature, FLOATS_SENT*sizeof(float));
}

//End of the program
