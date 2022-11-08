int lightPin = A0;
int lightVal;
int buzzPin = 8;
int dt;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPin,INPUT);
pinMode(buzzPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
dt = (9.0/25.0)*lightVal +1;
Serial.println(lightVal);
digitalWrite(buzzPin,HIGH);
delay(dt);
digitalWrite(buzzPin,LOW);
delay(dt);
}
