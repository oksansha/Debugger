#include "Debug.h"
#include <SoftwareSerial.h>

Debugger::Debugger(int RX, int TX)
{
  SoftwareSerial mySerial(RX, TX);
    Serial.begin(9600);

   mySerial.begin(9600);
}


