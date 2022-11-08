int lightPin = A0;
int lightVal;
int redPin = 7;
int greenPin = 8;
int delayT =250;
int dt =2000;
void setup() {
  // put your setup code here, to run once:
pinMode(lightPin,INPUT);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(delayT);
if(lightVal<5){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
}
if(lightVal>20){
  digitalWrite(greenPin,HIGH);
  digitalWrite(redPin,LOW);
}
}
