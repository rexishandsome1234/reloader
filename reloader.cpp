#include "reloader.h"
reloader::myservo(uint8_t servopin, uint8_t buttonpin, uint8_t count)
  : _buttonpin(buttonpin), _servopin(servopin), _count(count){
    _loop=0;
    pinMode(_buttonpin, INPUT_PULLUP);
}
void reloader::attach(uint8_t buttonpin) {
  _buttonpin = buttonpin;
  _buttonstate=digitalRead(buttonpin);
}
void reloader::write() {
  if (_buttonstate == 1 && _loop == 0) {
    input(angle);
    _count++;
    _loop = 1;
    _angle = (angle - 3);
  } else if ((_buttonstate) == HIGH && _loop == 1) {
    _loop = 0;
  }
}
int reloader::buttonstate(){
  return _buttonstate;
}
void reloader::reset(){
  _count=0;
  _angle=60;
}
void reloader::getcount(){
_getcount=_count;
}
