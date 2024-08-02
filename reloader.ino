#include"servo.h"
servo myservo(9,2,0)
void setup(){
  Serial.begin(9600);
}
void loop(){
  myservo.write(angle);
  Serial.print(myservo.buttonstate());
}
