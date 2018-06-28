// This sketch will send out a Nikon D50 trigger signal (probably works with most Nikons)
// See the full tutorial at http://www.ladyada.net/learn/sensors/ir.html
// this code is public domain, please enjoy!
 
int IRledPin =  13;    // LED connected to digital pin 13
 
// The setup() method runs once, when the sketch starts
void channel2();
void  channel5();
void  SendChannelUpCode(); 
void  channel3();
void  channel4();
 void channel();
void setup()   {                
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);      
 
  Serial.begin(9600);
}
 
void loop()                     
{
  //Serial.println("Sending IR signal");
 
 // SendChannelUpCode();
 
// delay(10000);  // wait twenty seconds (20 seconds * 1000 milliseconds)

//    switch (Serial.parseInt()){
//    case 1:
// Serial.println("one"); 
//    break;
//    case 2:
//    Serial.println("Two");
//    break;
//    case 3:
//    Serial.println("three");
//    break;
//    case 4:
//    Serial.println("four");
//    break;
//    case 5:
//    Serial.println("five");
//    break;
//    case 6:
//    Serial.println("six");
//    break;
//   
//    
//    }

    switch (Serial.parseInt()){
    case 1:
    channel(); //on
    break;
    case 2:
    SendChannelUpCode();//off
    break;
    case 3:
    channel2(); //temp -
    break;
    case 4:
    channel3();
    break;
    case 5:
    channel4();
    break;
    case 6:
    channel5();
    break;
   
    
    }
  
}
 
// This procedure sends a 38KHz pulse to the IRledPin 
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseiR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait

  //cli();  // this turns off any background interrupts
 
  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds
   digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds
 
   // so 26 microseconds altogether
   microsecs -= 26;
  }
 
  //sei();  // this turns them back on
}

void SendChannelUpCode() {

delayMicroseconds(54160); pulseiR(9300);
delayMicroseconds(4520); pulseiR(680);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(1700); pulseiR(620);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(620); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1700); pulseiR(620);


}
void channel(){
delayMicroseconds(41840); pulseiR(9260);
delayMicroseconds(4640); pulseiR(560);
delayMicroseconds(700); pulseiR(520);
delayMicroseconds(720); pulseiR(560);
delayMicroseconds(1760); pulseiR(620);
delayMicroseconds(680); pulseiR(560);
delayMicroseconds(1800); pulseiR(560);
delayMicroseconds(700); pulseiR(560);
delayMicroseconds(660); pulseiR(560);
delayMicroseconds(640); pulseiR(500);
delayMicroseconds(740); pulseiR(480);
delayMicroseconds(740); pulseiR(480);
delayMicroseconds(1900); pulseiR(480);
delayMicroseconds(1880); pulseiR(560);
delayMicroseconds(1820); pulseiR(520);
delayMicroseconds(740); pulseiR(520);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(1820); pulseiR(480);
delayMicroseconds(740); pulseiR(480);
delayMicroseconds(720); pulseiR(500);
delayMicroseconds(720); pulseiR(500);
delayMicroseconds(700); pulseiR(500);
delayMicroseconds(720); pulseiR(500);
delayMicroseconds(740); pulseiR(480);
delayMicroseconds(720); pulseiR(500);
delayMicroseconds(720); pulseiR(580);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(660); pulseiR(480);
delayMicroseconds(720); pulseiR(540);
delayMicroseconds(680); pulseiR(540);
delayMicroseconds(660); pulseiR(520);
delayMicroseconds(720); pulseiR(500);
delayMicroseconds(700); pulseiR(500);
delayMicroseconds(700); pulseiR(520);
delayMicroseconds(740); pulseiR(480);
delayMicroseconds(720); pulseiR(480);
delayMicroseconds(740); pulseiR(480);
delayMicroseconds(740); pulseiR(480);
delayMicroseconds(720); pulseiR(500);
delayMicroseconds(720); pulseiR(540);
delayMicroseconds(680); pulseiR(540);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(1800); pulseiR(520);
delayMicroseconds(720); pulseiR(540);
delayMicroseconds(660); pulseiR(500);
delayMicroseconds(1880); pulseiR(500);
delayMicroseconds(24900); pulseiR(320);
delayMicroseconds(12120); pulseiR(280);
delayMicroseconds(16844); pulseiR(300);


  
  
}
void channel2(){delayMicroseconds(48120); pulseiR(200); //temp-
delayMicroseconds(61724); pulseiR(9280);
delayMicroseconds(4580); pulseiR(620);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(1740); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(1700); pulseiR(620);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(1720); pulseiR(600);
delayMicroseconds(1720); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(600);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(1740); pulseiR(580);
delayMicroseconds(1720); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);


}
void channel3(){delayMicroseconds(57620); pulseiR(9300);//temp+
delayMicroseconds(4560); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(680); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(680); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(1680); pulseiR(620);


}
void channel4()
{delayMicroseconds(9216); pulseiR(9280); // fan-
delayMicroseconds(4580); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1680); pulseiR(640);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(580);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(1700); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(600);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(640); pulseiR(580);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(600); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(620); pulseiR(600);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
}
void channel5(){delayMicroseconds(63248); pulseiR(9280); // fan+
delayMicroseconds(4440); pulseiR(760);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(1700); pulseiR(620);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1680); pulseiR(620);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(620); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(620); pulseiR(620);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(620); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(660); pulseiR(600);
delayMicroseconds(620); pulseiR(620);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(640); pulseiR(620);
delayMicroseconds(640); pulseiR(600);
delayMicroseconds(1700); pulseiR(600);
delayMicroseconds(1720); pulseiR(580);
delayMicroseconds(660); pulseiR(580);
delayMicroseconds(1700); pulseiR(620);
}
