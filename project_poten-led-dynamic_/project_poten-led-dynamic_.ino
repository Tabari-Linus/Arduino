int portPin  = A1;
int gPin = 6;
int portVal;
float LEDVal;


void setup() {
  // put your setup code here, to run once:
pinMode(portPin, INPUT);
pinMode(gPin, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
portVal = analogRead(portPin);
LEDVal = (255.0/1023.0)*portVal;
analogWrite(gPin,LEDVal);
Serial.println(LEDVal);
}
