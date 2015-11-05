#ifndef Debug_h
#define Debug_h

#include "Arduino.h"

class Debugger
{
  public:
    Debugger(int RX, int TX);//constructor
    ~Debugger();//destructor

  private:
    DebSend(int varName, double value);
    DebSendIP(int StringName, double Data);
    DebSendUP(int StringName, double Data);
    DebReceive();
};

#endif
