#include <Servo.h>
Servo myServo;
int angle = 0;

void setup() {
  myServo.attach(9);
}

void loop() {
  angle = 90 - angle;
  myServo.write(90);
  delay(500);  
//  myServo.write(45);
//  delay(500);
//  myServo.write(135);
//  delay(500);
}
