int portPin = A1;
int portVal;
int rPin = 6;
int delayT = 400;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(portPin,INPUT);
pinMode(rPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  portVal = analogRead(portPin);
  Serial.println(portVal);
  delay(delayT);

while (portVal > 1000){
  digitalWrite(rPin,HIGH);
  portVal = analogRead(portPin);
  Serial.println(portVal);
  delay(delayT);
}
digitalWrite(rPin,LOW);
}
