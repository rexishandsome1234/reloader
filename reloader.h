#pragma once
#include <Arduino.h>
#include<stdint.h>
class reloader {
  private:
  uint8_t count,servopin,buttonpin,servo2pin,button2pin,servo2degree;
  
  public:
  uint8_t angle;
  int loop;
  myservo(uint8_t servopin, uint8_t buttonpin, uint8_t count);
  void attach(uint8_t buttonpin);
  void write();
  int buttonstate();
  void reset();
  void getcount();
}
