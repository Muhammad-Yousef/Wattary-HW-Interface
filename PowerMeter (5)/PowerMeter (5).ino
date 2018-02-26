//Michael Klements
//The DIY Life
//27 October 2014

#include <LiquidCrystal.h>

int currentPin = 1;              //Assign CT input
double kilos = 0;
int peakPower = 0;
//LiquidCrystal Serial(8, 9, 4, 5, 6, 7);  //Assign Serial screen pins

void setup() 
{ 
  Serial.begin(9600);
  //Serial.begin(16,2);              // columns, rows.  use 16,2 for a 16x2 Serial, etc.
  //Serial.clear();
  //Serial.setCursor(0,0);           // set cursor to column 0, row 0 (the first row)
  Serial.print("Running");
}

void loop() 
{ 
  int current = 0;
  int maxCurrent = 0;
  int minCurrent = 1000;
  for (int i=0 ; i<=200 ; i++)  //Monitors and logs the current input for 200 cycles to determine max and min current
  {
    current = analogRead(currentPin);    //Reads current input
    if(current >= maxCurrent)
      maxCurrent = current;
    else if(current <= minCurrent)
      minCurrent = current;
  }
  if (maxCurrent <= 517)
  {
    maxCurrent = 516;
  }
  double RMSCurrent = ((maxCurrent - 516)*0.707)/11.8337;    //Calculates RMS current based on maximum value
  int RMSPower = 220*RMSCurrent;    //Calculates RMS Power Assuming Voltage 220VAC, change to 110VAC accordingly
  if (RMSPower > peakPower)
  {
    peakPower = RMSPower;
  }
  kilos = kilos + (RMSPower * (2.05/60/60/1000));    //Calculate kilowatt hours used
  delay (2000);
  //Serial.clear();
  //Serial.setCursor(0,0);           // Displays all current data
  Serial.print(RMSCurrent);
  Serial.print("A");
  //Serial.setCursor(10,0);
  Serial.print(RMSPower);
  Serial.print("W");
  //Serial.setCursor(0,1);
  Serial.print(kilos);
  Serial.print("kWh");
  //Serial.setCursor(10,1);
  Serial.print(peakPower);
  Serial.print("W");
    Serial.print(current);
  Serial.println("a");

}
