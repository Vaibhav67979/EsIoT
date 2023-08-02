int light_pin = 5;

void setup() {
  // put your setup code here, to run once:
  pinMode(light_pin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int light_data = digitalRead(light_pin);
  if(light_pin)
    Serial.println("Light not detected...");
  else
    Serial.println("Light detected...");
  delay(1000);
}
