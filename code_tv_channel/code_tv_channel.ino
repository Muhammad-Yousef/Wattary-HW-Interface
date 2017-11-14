// This sketch will send out a Nikon D50 trigger signal (probably works with most Nikons)
// See the full tutorial at http://www.ladyada.net/learn/sensors/ir.html
// this code is public domain, please enjoy!
 
int IRledPin =  13;    // LED connected to digital pin 13
 
// The setup() method runs once, when the sketch starts
 
void setup()   {                
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);      
 
  Serial.begin(9600);
}
 
void loop()                     
{
  Serial.println("Sending IR signal");
 
 // SendChannelUpCode();
 
// delay(10000);  // wait twenty seconds (20 seconds * 1000 milliseconds)

    switch (Serial.read()){
    case 1:
void SendChannelUpCode(); 
    break;
    case 2:
void    channel();
    break;
    case 3:
void    channel2();
    break;
    case 4:
void    channel3();
    break;
    case 5:
void    channel4();
    break;
    case 6:
void    channel5();
    break;
   
    

  
}
 
// This procedure sends a 38KHz pulse to the IRledPin 
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait

  cli(); } // this turns off any background interrupts
 
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



