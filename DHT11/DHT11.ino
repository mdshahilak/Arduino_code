#include <dht.h>
#define outPin 8
dht DHT;
void setup() {
Serial.begin(9600);
}

void loop() {
int readData = DHT.read11(outPin);
float t = DHT.temperature;
float h = DHT.humidity;

Serial.print("Temperature = ");
Serial.print(t);
Serial.print("°C | ");
Serial.print((t*9.0)/5.0+32.0);
Serial.print("°F ");
Serial.print("\nHumidity = ");
Serial.print(h);
Serial.print("%");
Serial.println("");
delay(2000);
}
