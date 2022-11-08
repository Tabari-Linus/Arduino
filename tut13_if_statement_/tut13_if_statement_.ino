int myPin= A2;
int realVal;
float V2;
int delayT = 250;
int redPin = 9;
int yellowPin = 10;
int greenPin = 12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(myPin, INPUT);
pinMode(redPin,OUTPUT);
pinMode(yellowPin,OUTPUT);
pinMode(greenPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
realVal = analogRead(myPin);
V2 = (5.0/1023.0)*realVal;
Serial.print("The potentiometer Voltage is :");
Serial.println(V2);
if(V2<3.0){
  digitalWrite(greenPin,HIGH);
  }
 if(V2>=3.0){
  digitalWrite(greenPin,LOW);
}
if(V2>3.0 && V2<4.0){
  digitalWrite(yellowPin,HIGH);
}
if(V2<3.0 || V2>4.0){
  digitalWrite(yellowPin,LOW);
}
if( V2 >4.0){
  digitalWrite(redPin,HIGH);
}
if(V2<4.0){
  digitalWrite(redPin,LOW);
}

delay(delayT);
}
