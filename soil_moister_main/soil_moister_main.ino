int water; //random variable 
void setup() {
  pinMode(13,OUTPUT); //output pin for relay board, this will sent signal to the relay
  pinMode(6,INPUT); //input pin coming from soil sensor
  Serial.begin(9600);
}

void loop() { 
  water = digitalRead(6); // reading the coming signal from the soil sensor
  Serial.println(water);
  if(water == 0) // if water level is full then cut the relay 
  digitalWrite(13,HIGH); // low is to cut the relay
  else
  digitalWrite(13,LOW); //high to continue proving signal and water supply
  delay(400);
}
