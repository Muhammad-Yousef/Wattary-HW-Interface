int val;
int tempPin = 1;
int tempin2=2;
int val2;
void setup()
{
Serial.begin(9600);
}
void loop()
{
val = analogRead(tempPin);
val2 = analogRead(tempin2);
float mv = ( val/1024.0)*5000; 
float cel = mv/10;
float farh = (cel*9)/5 + 32;


//float mv2 = ( val2/1024.0)*5000; 
//float cel2 = mv2/10;
//float farh2 = (cel2*9)/5 + 32;

Serial.print("TEMPRATURE = ");
Serial.print(cel);
Serial.print("*C");
Serial.println();
/*Serial.print("TEMPRATURE2 = ");
Serial.print(cel2);
Serial.print("*C");
Serial.println();*/
delay(1000);


/* uncomment this to get temperature in farenhite 
Serial.print("TEMPRATURE = ");
Serial.print(farh);
Serial.print("*F");
Serial.println();


*/
}


