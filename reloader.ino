#include"reloader.h"
reloader myservo(9,2,0);
void setup(){
  Serial.begin(9600);
  myservo.reset();
}
void loop(){
  myservo.write(60);
  myservo.write(0);
  Serial.print(myservo.buttonstate());
  Serial.print(myservo.getcount());
}
