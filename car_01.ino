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
