int ir =10;
int led = 13;
int val = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(ir,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
val = digitalRead(ir);
Serial.print (ir);      
if (val == HIGH)
digitalWrite(13,LOW);
else
digitalWrite(13,HIGH);

}
