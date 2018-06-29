#include <Wire.h>
#include <Servo.h> // Include the Servo library






 
 //Slave Address for the Communication
#define SLAVE_ADDRESS 0x05
#define SLAVE_ADDRESS 0x04
 
 char number[50];
 int state = 0;
 
 //Code Initialization

int IRledPin =  13;   
// LED connected to digital pin 13
 
// The setup() method runs once, when the sketch starts
void channel2();
void  channel5();
void  SendChannelUpCode(); 
void  channel3();
void  channel4();
 void channel();




 int IRledPin1 =  9;    // LED connected to digital pin 13
 
// The setup() method runs once, when the sketch starts
void channel21();
void  channel51();
void  SendChannelUpCode1(); 
void  channel31();
void  channel41();
 void channel1();

 

int servoPin=8, state=1,x=0,y=2,tito=1; // Declare the Servo pin and the State Variable
Servo Servo1; // Create a servo object 



int sensorPin = 0;

 
 void setup() {



  Servo1.attach(servoPin); //attach the servo to the used pin number 
  attachInterrupt(0, Test, FALLING); //attach the Interrupt  Function "Test" to (pin number 2 arduino uno) "Interrupt0" and calling State when "Falling"


 pinMode(IRledPin, OUTPUT);   
pinMode(IRledPin1, OUTPUT);      
   


   // initialize i2c as slave
   Serial.begin(9600);
   Wire.begin(SLAVE_ADDRESS);
 void receiveData(int byteCount)
   
 number[i] = '\0';
   Serial.print(number);
switch (number[0]){
 case 'a':
SendChannelUpCode(); 
 Serial.println("tv on");


 break;
 case 'b':
SendChannelUpCode(); 
 Serial.println("tv off");

break;
case 'c':
 channel();
 Serial.println("tv 1");

 break;
 case 'd':
 channel2();
 Serial.println("tv 2");

 break;
case 'e':
channel3();
Serial.println("tv 3");

break;
case 'f':
channel4();
Serial.println("tv 4");

break;
case 'g':
channel5();
Serial.println("tv 5");

break;
case 'h':
Serial.println("tv 6");



break;
case 'i':
Serial.println("tv 7");


break;

case 'j':
 Serial.println("tv 8");


break;

case 'k':
Serial.println("tv 9");


break;


case 'l':
Serial.println("tv 10");



break;


case 'm':
Serial.println("mute");


break;



case 'n':
 Serial.println("CH UP");


break;


case 'o':
Serial.println("CH DN ");


break;

case 'p':
Serial.println("VOL UP");



break;
case 'q':

Serial.println("VOL DN");

break;

case 'r':
SendChannelUpCode1(); 

Serial.println("air conditioner on");

break;
case 's':
channel1();
Serial.println("air conditioner off");


break;
case 't':
channel31();
Serial.println("temp+");


break;
case 'u':
channel21();
Serial.println("temp-");


break;

case 'v':
 channel31();
 Serial.println("Van+");


break;
case 'w':
channel41();
Serial.println("Van-");


break;
case 'Y':

  up();

  Serial.println("elevator up");

break;

case 'X':
 down();
 Serial.println("elevator down");

break;


case 'W':
 Stop();
 Serial.println("elevator stop");

break;


case 'V':
 Test();
 Serial.println("elevator test");

break;

case 'M':

 Serial.println("WATER MEASURE");
break;
case 'N':
 Serial.println("electricity MEASURE");
 break;












case 'M':


temprature ();
 Serial.println("calculate temprature");

break;




}









}




















 


 



  }

 }  // end while
 
 // callback for sending data
 void sendData(){
-  Wire.write(number);
+  Wire.write("");
 }
 void loop (){
  // This procedure sends a 38KHz pulse to the IRledPin 
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseiR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait

  cli();  // this turns off any background interrupts
 
  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds
   digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds
 
   // so 26 microseconds altogether
   microsecs -= 26;
  }
 
  sei();  // this turns them back on
}


void SendChannelUpCode() {
  delayMicroseconds(33732); pulseiR(9420 );
delayMicroseconds(4660); pulseiR(600 );
delayMicroseconds(1720); pulseiR(560 );
delayMicroseconds(620); pulseiR(560 );
delayMicroseconds(600); pulseiR(560 );
delayMicroseconds(620); pulseiR(560 );
delayMicroseconds(600); pulseiR(560 );
delayMicroseconds(600); pulseiR(580 );
delayMicroseconds(600); pulseiR(560 );
delayMicroseconds(600); pulseiR(580 );
delayMicroseconds(600); pulseiR(560 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(1720); pulseiR(600 );
delayMicroseconds(1720); pulseiR(580 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(1740); pulseiR(560 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(600); pulseiR(580 );
delayMicroseconds(580); pulseiR(580 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(580); pulseiR(580 );
delayMicroseconds(600); pulseiR(560 );
delayMicroseconds(600); pulseiR(580 );
delayMicroseconds(600); pulseiR(580 );
delayMicroseconds(1740); pulseiR(560 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(580); pulseiR(580 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(1740); pulseiR(560 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(1740); pulseiR(580 );
delayMicroseconds(580); pulseiR(580 );
delayMicroseconds(41220); pulseiR(9340);
delayMicroseconds(2340);  pulseiR(580);
 
}
void channel(){
delayMicroseconds(2884);pulseiR(9380);
delayMicroseconds(4660);pulseiR(600);
delayMicroseconds(1720);pulseiR(580);
delayMicroseconds(600);pulseiR(560);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(600);pulseiR(560);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(580);pulseiR(580);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(580);pulseiR(580);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(1720);pulseiR(580);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(1740);pulseiR(560);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(1720);pulseiR(580);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(1720);pulseiR(580);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(580);pulseiR(580);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(580);pulseiR(580);
delayMicroseconds(600);pulseiR(560);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(580);pulseiR(580);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(1720);pulseiR(580);
delayMicroseconds(1740);pulseiR(560);
delayMicroseconds(1760);pulseiR(560);
delayMicroseconds(1740);pulseiR(580);
delayMicroseconds(600);pulseiR(580);
delayMicroseconds(41220);pulseiR(9320);
delayMicroseconds(2340);pulseiR(560);

  
  
}
void channel2(){
delayMicroseconds(30308); pulseiR(9380);
delayMicroseconds(4660); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(600);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(41240); pulseiR(9300);
delayMicroseconds(2360); pulseiR(560);


}
void channel3(){
delayMicroseconds(18472); pulseiR(9420);
delayMicroseconds(4660); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(600);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1720); pulseiR(600);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(41220); pulseiR(9280);
delayMicroseconds(2400); pulseiR(520);

}
void channel4()
{
delayMicroseconds (61160); pulseiR(9400);
delayMicroseconds(4660); pulseiR(600);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(620); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(600); pulseiR(560);

}
void channel5(){
delayMicroseconds(21032); pulseiR(9400);
delayMicroseconds(4640); pulseiR(620);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1740); pulseiR(560);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1720); pulseiR(600);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(600); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(580); pulseiR(580);
delayMicroseconds(41200); pulseiR(9340);
delayMicroseconds(2320); pulseiR(600);

}






void SendChannelUpCode1() {
+
+delayMicroseconds(54160); pulseiR(9300);
+delayMicroseconds(4520); pulseiR(680);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(1700); pulseiR(620);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(620); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1700); pulseiR(620);
+
+
+}
+void channel1(){
+delayMicroseconds(41840); pulseiR(9260);
+delayMicroseconds(4640); pulseiR(560);
+delayMicroseconds(700); pulseiR(520);
+delayMicroseconds(720); pulseiR(560);
+delayMicroseconds(1760); pulseiR(620);
+delayMicroseconds(680); pulseiR(560);
+delayMicroseconds(1800); pulseiR(560);
+delayMicroseconds(700); pulseiR(560);
+delayMicroseconds(660); pulseiR(560);
+delayMicroseconds(640); pulseiR(500);
+delayMicroseconds(740); pulseiR(480);
+delayMicroseconds(740); pulseiR(480);
+delayMicroseconds(1900); pulseiR(480);
+delayMicroseconds(1880); pulseiR(560);
+delayMicroseconds(1820); pulseiR(520);
+delayMicroseconds(740); pulseiR(520);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(1820); pulseiR(480);
+delayMicroseconds(740); pulseiR(480);
+delayMicroseconds(720); pulseiR(500);
+delayMicroseconds(720); pulseiR(500);
+delayMicroseconds(700); pulseiR(500);
+delayMicroseconds(720); pulseiR(500);
+delayMicroseconds(740); pulseiR(480);
+delayMicroseconds(720); pulseiR(500);
+delayMicroseconds(720); pulseiR(580);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(660); pulseiR(480);
+delayMicroseconds(720); pulseiR(540);
+delayMicroseconds(680); pulseiR(540);
+delayMicroseconds(660); pulseiR(520);
+delayMicroseconds(720); pulseiR(500);
+delayMicroseconds(700); pulseiR(500);
+delayMicroseconds(700); pulseiR(520);
+delayMicroseconds(740); pulseiR(480);
+delayMicroseconds(720); pulseiR(480);
+delayMicroseconds(740); pulseiR(480);
+delayMicroseconds(740); pulseiR(480);
+delayMicroseconds(720); pulseiR(500);
+delayMicroseconds(720); pulseiR(540);
+delayMicroseconds(680); pulseiR(540);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(1800); pulseiR(520);
+delayMicroseconds(720); pulseiR(540);
+delayMicroseconds(660); pulseiR(500);
+delayMicroseconds(1880); pulseiR(500);
+delayMicroseconds(24900); pulseiR(320);
+delayMicroseconds(12120); pulseiR(280);
+delayMicroseconds(16844); pulseiR(300);
+
+
+  
+  
+}
+void channel21(){delayMicroseconds(48120); pulseiR(200); //temp-
+delayMicroseconds(61724); pulseiR(9280);
+delayMicroseconds(4580); pulseiR(620);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(1740); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(1700); pulseiR(620);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(1740); pulseiR(580);
+delayMicroseconds(1720); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(1720); pulseiR(600);
+delayMicroseconds(1720); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(600);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(1740); pulseiR(580);
+delayMicroseconds(1720); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+
+
+}
+void channel31(){delayMicroseconds(57620); pulseiR(9300);//temp+
+delayMicroseconds(4560); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(680); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(680); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(1680); pulseiR(620);
+
+
+}
+void channel41()
+{delayMicroseconds(9216); pulseiR(9280); // fan-
+delayMicroseconds(4580); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(1680); pulseiR(640);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(580);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(1700); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(600);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(640); pulseiR(580);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(600); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(620); pulseiR(600);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+}
+void channel51(){delayMicroseconds(63248); pulseiR(9280); // fan+
+delayMicroseconds(4440); pulseiR(760);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(1700); pulseiR(620);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1680); pulseiR(620);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(620); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(620); pulseiR(620);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(620); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(660); pulseiR(600);
+delayMicroseconds(620); pulseiR(620);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(640); pulseiR(620);
+delayMicroseconds(640); pulseiR(600);
+delayMicroseconds(1700); pulseiR(600);
+delayMicroseconds(1720); pulseiR(580);
+delayMicroseconds(660); pulseiR(580);
+delayMicroseconds(1700); pulseiR(620);
+}


  Servo1.write(90);



void Test(){
  state=0;
  if(tito==1)
  Servo1.write(90); // Make Servo Stop
  x=1;
  y=2;
  tito=2;
  //DownAbit();
  Serial.println("Test End");
}

void up(){
  tito=1;
  if(digitalRead(2)==HIGH){
  Servo1.write(0);  // Make servo go to UP
  delay(7000);      // For 7 Seconds
  }
}

void down(){
  Servo1.write(180);// Make servo go to Down 
  delay(7000);      // For 7 Seconds
  
}

void Stop(){
  Servo1.write(90); // Make Servo Stop
  delay(1000);      // For 1 Second
}






 int reading = analogRead(sensorPin);  


 void temprature (){
float voltage = reading * 5.0;
 voltage /= 1024.0; 
 float temperatureC = (voltage - 0.5) * 100 , (" degrees C");

 float temperatureF = (temperatureC * 9.0 / 5.0) + 32.0,(" degrees F");
delay(1000);

 }

 }
 
 //End of the program
