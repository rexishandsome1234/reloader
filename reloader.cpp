#include "servo.h"
servo::myservo( uint8_t servopin, uint8_t buttonpin, uint8_t count;)
  : _button(button), _servopin(servopin), _count(count){
    _loop=0;
    _angle=60;
}
void servo::attach(uint8_t buttonpin,int buttonstate) {
  _buttonpin = buttonpin;
  pinMode(_buttonpin, INPUT_PULLUP);
  _buttonstate=digitalRead(buttonpin);
}
void servo::write(int& loop,uint8_t& angle) {
  if (digitalRead(_button) == HIGH && _loop == 0) {
    angle = 60;
    _count++;
    _loop = 1;
    _angle = (60 - _count);
  } else if (digitalRead(_button) == HIGH && _loop == 1) {
    _loop = 0;
  }
}
void servo:buttonstate(){
  return _buttonstate;
}
