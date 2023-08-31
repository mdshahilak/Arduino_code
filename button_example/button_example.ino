int ledPin = 13;
int inPin = 7;
int val = 0;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin,OUTPUT);
pinMode(inPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(inPin);//read input pin from button
digitalWrite(ledPin,val);// set the led to the button
}
