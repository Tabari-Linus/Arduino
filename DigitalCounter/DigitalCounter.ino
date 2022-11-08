int first = 13;
int second = 12;
int third = 11;
int fourth = 10;
int delayT = 2000;

void setup() {
  // put your setup code here, to run once:
pinMode(first,OUTPUT);
pinMode(second,OUTPUT);
pinMode(third,OUTPUT);
pinMode(fourth,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(first,LOW);
digitalWrite(second,LOW);
digitalWrite(third,LOW);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,LOW);
digitalWrite(third,LOW);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,LOW);
digitalWrite(second,HIGH);
digitalWrite(third,LOW);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,HIGH);
digitalWrite(third,LOW);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,LOW);
digitalWrite(second,LOW);
digitalWrite(third,HIGH);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,LOW);
digitalWrite(third,HIGH);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,LOW);
digitalWrite(second,HIGH);
digitalWrite(third,HIGH);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,HIGH);
digitalWrite(third,HIGH);
digitalWrite(fourth,LOW);
delay(delayT);

digitalWrite(first,LOW);
digitalWrite(second,LOW);
digitalWrite(third,LOW);
digitalWrite(fourth,HIGH);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,LOW);
digitalWrite(third,LOW);
digitalWrite(fourth,HIGH);
delay(delayT);

digitalWrite(first,LOW);
digitalWrite(second,HIGH);
digitalWrite(third,LOW);
digitalWrite(fourth,HIGH);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,HIGH);
digitalWrite(third,LOW);
digitalWrite(fourth,HIGH);
delay(delayT);

digitalWrite(first,LOW);
digitalWrite(second,LOW);
digitalWrite(third,HIGH);
digitalWrite(fourth,HIGH);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,LOW);
digitalWrite(third,HIGH);
digitalWrite(fourth,HIGH);
delay(delayT);

digitalWrite(first,LOW);
digitalWrite(second,HIGH);
digitalWrite(third,HIGH);
digitalWrite(fourth,HIGH);
delay(delayT);

digitalWrite(first,HIGH);
digitalWrite(second,HIGH);
digitalWrite(third,HIGH);
digitalWrite(fourth,HIGH);
delay(2000);

}
