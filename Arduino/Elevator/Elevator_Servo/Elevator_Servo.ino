#include <Servo.h> // Include the Servo library 
int servoPin=9, state=1,x=0,y=2,tito=1; // Declare the Servo pin and the State Variable
Servo Servo1; // Create a servo object 


void setup() {
  Servo1.attach(servoPin); //attach the servo to the used pin number 
  attachInterrupt(0, Test, RISING); //attach the Interrupt  Function "Test" to (pin number 2 arduino uno) "Interrupt0" and calling State when "Falling"
  Serial.begin(9600);
}


void loop(){
  if(state==1){
    Serial.println("Normal Start");
    up();
    if(state==1)
    delay(10000);      // For 7 Seconds
    Serial.print("State");
    //Serial.println(state);
    if(state==1){
      //delay(1000);
      if(state==1){
    Serial.println("Normal Second");
    
    Stop();
    Serial.println("b5");
    }}
    if(state==1){
    Serial.println("Normal Third");
    down();
    }
    if(state==1){
    Serial.println("Normal Fourth");
    Stop();
    }
    Serial.println("Normal End");
  }
  else{
    
    Serial.print("x");
    Serial.print(x);
    Serial.print(" y");
    Serial.println(y);
    if(x==1&y==2){
    Servo1.write(180);
    delay(2000);
    x=0;
    y=1;
    Serial.println("DownAbit");
  }
    Serial.println("Else");
    Servo1.write(90); // Make Servo Stop
    delay(1000);
  }
}

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
  Servo1.write(0);  // Make servo go to UP
}

void down(){
  Servo1.write(180);// Make servo go to Down 
  delay(7000);      // For 7 Seconds
}

void Stop(){
  Servo1.write(90); // Make Servo Stop
  delay(10000);      // For 1 Second
}
