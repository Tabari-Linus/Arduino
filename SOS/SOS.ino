int redLED = 8;
int dit = 70;
int dah = 2 00;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);
digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);
digitalWrite(redLED,HIGH);
delay(dah);
digitalWrite(redLED,LOW);
delay(dah);

digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);
digitalWrite(redLED,HIGH);
delay(dit);
digitalWrite(redLED,LOW);
delay(dit);

delay(2000);  
}
