int buttonPin1 = 12;
int buttonPin2 = 11;
int ledPin =3;
int buttonVal1;
int buttonVal2;
int buzzPin = 13;
int dt = 250;
int dtb = 500;
int ledBright = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(buttonPin1,INPUT);
pinMode(buttonPin2,INPUT);
pinMode(ledPin, OUTPUT);
pinMode(buzzPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal1 = digitalRead(buttonPin1);
buttonVal2 = digitalRead(buttonPin2);
Serial.print("button 1 = ");
Serial.print(buttonVal1);
Serial.print(" and ");
Serial.print("button 2 = ");
Serial.println(buttonVal2);
delay(dt);
if(buttonVal1 == 0){
  ledBright = ledBright + 20;
}
if(buttonVal2 == 0){
  ledBright = ledBright - 20;
}

if(ledBright > 255){
  ledBright = 255;
  digitalWrite(buzzPin,HIGH);
  delay(dtb);
  digitalWrite(buzzPin,LOW);
}


if(ledBright < 0){
  ledBright = 0;
  digitalWrite(buzzPin,HIGH);
  delay(dtb);
  digitalWrite(buzzPin,LOW);
}

analogWrite(ledPin,ledBright);
}
