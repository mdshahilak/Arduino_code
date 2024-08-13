//Automatic Street Light with LDR//

#define sensorPin A5  
#define light 2

int sensorValue;

void setup()
{
  pinMode(light,OUTPUT);
  pinMode(13,OUTPUT);
  pinMode(sensorPin,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorValue = analogRead(sensorPin);  
  Serial.print(sensorValue);
  Serial.print("\n");
  
// check if it is dark then switch on the light else let it remain off 

  if (sensorValue <250){
  digitalWrite(light,HIGH);
  digitalWrite(LED_BUILTIN,HIGH);
  }

  else{
  digitalWrite(light,LOW);
  digitalWrite(LED_BUILTIN,LOW);
  }
}
