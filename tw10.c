const int buttonPin1 = 13;
int buttonState1 = LOW;
const ledPin1 = A5;

void setup(){
	pinMode(buttonPin1, INPUT);
	pinMode(ledPin1, OUTPUT);

	Serial.begin(9600);
}

void loop(){
	buttonState1 = digitalRead(buttonPin1);

	if(buttonState1 == HIGH){
		digitalWrite(ledPin1, LOW);
	}
	else{
		digitalWrite(ledPin1, HIGH);
	}
	Serial.println(buttonState1);

}