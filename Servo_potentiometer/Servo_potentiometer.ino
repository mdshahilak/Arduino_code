#include <Servo.h>
int potPin = A0;
int servoPin = 9;
Servo servo;
void setup() {
  // put your setup code here, to run once:
servo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
int reading = analogRead(potPin);
int angle = map(reading, 0, 1023, 0, 180);
servo.write(angle);
}
