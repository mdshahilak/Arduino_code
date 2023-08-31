const int relay = 10;
const int ldrPin = A0;
void setup() {
  Serial.begin(9600);
  pinMode(relay, OUTPUT);
  pinMode(ldrPin, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  int ldrStatus = analogRead(ldrPin);
  if(ldrStatus<=300){
    digitalWrite(relay, LOW);
    Serial.println("Relay is OFF");
  }
  else{
    digitalWrite(relay, HIGH);
    Serial.println("--------------");
  }
  // put your main code here, to run repeatedly:

}
