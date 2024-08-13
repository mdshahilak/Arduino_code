int water; //random variable 
void setup() {
 
  pinMode(6,INPUT); //input pin coming from soil sensor
  Serial.begin(9600);
}

void loop() { 
  water = digitalRead(6); // reading the coming signal from the soil sensor
  Serial.println(water);

  delay(400);
}
