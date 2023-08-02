#include<dht.h>
dht DHT;
#define DHT11_PIN 4

int relay_pin = 8;

void setup() {
  // put your setup code here, to run once:
  pinMode(relay_pin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(relay_pin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  int chk = DHT.read11(DHT11_PIN);
  Serial.println("Temperature = ");
  Serial.println(DHT.temperature);
  if(DHT.temperature > 22){
      digitalWrite(relay_pin, HIGH);
  }
  else{
    digitalWrite(relay_pin, LOW);
  }
  delay(2000);
}
