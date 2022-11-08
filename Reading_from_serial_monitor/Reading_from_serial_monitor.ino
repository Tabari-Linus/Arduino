int myNumber;
int redPin = 6;
int delayT = 300;
String msg = "How many times do you want to the LED to blink: ";
String msg1 = "Your LED will blink: ";
String msg2 = "times.";
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}
myNumber = Serial.parseInt();
Serial.print(msg1);
Serial.print(myNumber);
Serial.println(msg1);

for(int j=0; j<myNumber; j++){
  digitalWrite(redPin,HIGH);
  delay(delayT);
  digitalWrite(redPin,LOW);
  delay(delayT);
}
}
