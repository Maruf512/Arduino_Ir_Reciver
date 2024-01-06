#include <IRremote.h>

int receive_pin=D5;


void setup(){
  IrReceiver.begin(receive_pin);
  Serial.begin(115200);
}

void loop()
{
  if(IrReceiver.decode())
  {
    Serial.println(IrReceiver.decodedIRData.command, HEX);
    
    delay(1500);
    IrReceiver.resume();
  }
}
