int redPin =9;
int greenPin =10;
int bluePin = 11;
String msg ="What color do you want? ";
String myColor;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
pinMode(greenPin,OUTPUT);
pinMode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}

myColor = Serial.readString();

if(myColor=="red\n"){
  digitalWrite(redPin,HIGH);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}
if(myColor=="green\n"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,HIGH);
  digitalWrite(bluePin,LOW);
}

if(myColor=="blue\n"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,HIGH);
}

if(myColor=="off\n"){
  digitalWrite(redPin,LOW);
  digitalWrite(greenPin,LOW);
  digitalWrite(bluePin,LOW);
}

if(myColor=="aqua\n"){
  digitalWrite(redPin,LOW);
  analogWrite(greenPin,255);
  analogWrite(bluePin,255);
}
}
