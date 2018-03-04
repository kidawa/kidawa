#include <Servo.h> //servo library
Servo myservo; // create servo object to control servo
int Echo = A4;
int Trig = A5;
int in1 = 9;
int in2 = 8;
int in3 = 7;
int in4 = 6;
int ENA = 10;
int ENB = 5;
int ABS = 50;
int rightDistance = 0,leftDistance = 0,middleDistance = 0, r=0, m=0, l=0 ;
int pos = 0;

void loop() {
  myservo.write(80);
 Serial.println("gooooo");
  delay(2000);
//  myservo.write(130);
// Serial.println("g");
  delay(2000);
  for (pos = 90; pos <= 180; pos += 1) {
    myservo.write(pos);
    delay(15);
  for (pos = 180; pos >= 0; pos -= 1) {
    delay(15);
  }
}
