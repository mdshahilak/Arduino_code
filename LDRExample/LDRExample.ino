#define sensorPin A5  

int sensorValue;

void setup()
{
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);  
  Serial.print(sensorValue);
  Serial.print("\n");
}
  
