#include <VirtualWire.h>
char *controller;
void setup() {
pinMode(13,OUTPUT);
vw_set_ptt_inverted(true); //
vw_set_tx_pin(12);
vw_setup(4000);// speed of data transfer Kbps
Serial.begin(9600);
}

void loop(){
   switch (Serial.parseInt()){
    case 1:
    ledon();
    break;
    case 2:
    ledoff();
    break;
   }
   }
  void ledon(){//
controller="1" ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); // Wait until the whole message is gone
digitalWrite(13,HIGH);
  }
  void ledoff(){
controller="0" ;
vw_send((uint8_t *)controller, strlen(controller));
vw_wait_tx(); // Wait until the whole message is gone
digitalWrite(13,LOW);
  }


