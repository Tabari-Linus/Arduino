int myNumber;
int buzzPin = 8;
String msg= "Please enter your Number: " ;
int delayT = 2000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available() == 0){
  
}
myNumber = Serial.parseInt();
if(myNumber>10){
  digitalWrite(buzzPin,HIGH);
  delay(delayT);
  digitalWrite(buzzPin,LOW);
}
}
