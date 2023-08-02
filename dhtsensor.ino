#include<dht.h>
dht DHT;
#define DHT11_PIN 4

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int chk = DHT.read11(DHT11_PIN);
  Serial.println("Temperature = ");
  Serial.println(DHT.temperature);
  Serial.println("Humidity = ");
  Serial.println(DHT.humidity);
  delay(2000);
}
