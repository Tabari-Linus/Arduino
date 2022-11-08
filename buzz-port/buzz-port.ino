int myNumber;
int portPin =A1;
float portVal;
int buzzPin = 8;
String msg= "Danger ..!!! Danger..!!!" ;
int delayT = 2000;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(buzzPin, OUTPUT);
pinMode(portPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
portVal = analogRead(portPin);
Serial.println(portVal);
while(portVal>1000){
  Serial.println(msg);
  digitalWrite(buzzPin,HIGH);
  portVal = analogRead(portPin);
  Serial.println(portVal);
}
digitalWrite(buzzPin,LOW);
}
