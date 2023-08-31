#include "NewPing.h"
#define TrigPin 2
#define EchoPin 3
#define MaxDistance 400
NewPing sonar(TrigPin, EchoPin, MaxDistance);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print("Distance = ");
Serial.print(sonar.ping_cm());
Serial.println(" cm");
delay(500);
}
