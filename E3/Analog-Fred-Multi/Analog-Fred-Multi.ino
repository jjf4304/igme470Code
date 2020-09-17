void setup() {
  // start serial port at 9600 bps
  Serial.begin(9600);
}
void loop() {
  // read sensor values and send them to the serial port:
  Serial.print("sensorPinA0: ");
  Serial.println(analogRead(A0));
  Serial.print("sensorPinA3: ");
  Serial.println(analogRead(A3));
  Serial.print("sensorPinA5: ");
  Serial.println(analogRead(A5));
  delay(1);
}
