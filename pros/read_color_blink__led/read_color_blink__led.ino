String myColor;
String msg= "Enter \t red \n \t yellow \n \t green ";
String msg1 = "Will be blinking the ";
String msg2 = "Five times.";
int redPin = 13;
int yellowPin = 5;
int greenPin = 2;
int delayT =400;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(redPin, OUTPUT);
pinMode(yellowPin, OUTPUT);
pinMode(greenPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while(Serial.available()==0){
  
}

myColor = Serial.readString();


//to blink red LED
if (myColor=="red\n" || myColor=="Red\n" || myColor=="RED\n"){
  for(int j=0; j<5; j++){
    digitalWrite(redPin,HIGH);
    delay(delayT);
    digitalWrite(redPin,LOW);
    delay(delayT);
  }
}

//to blink yellow LED
if (myColor=="yellow\n" || myColor=="YELLOW\n" || myColor=="Yellow\n"){
  for(int j=0; j<5; j++){
    digitalWrite(yellowPin,HIGH);
    delay(delayT);
    digitalWrite(yellowPin,LOW);
    delay(delayT);
  }
}

//to blink green LED
if(myColor=="green\n" || myColor=="Green\n" || myColor=="GREEN\n"){
  for(int j=0; j<5; j++){
    digitalWrite(greenPin,HIGH);
    delay(delayT);
    digitalWrite(greenPin,LOW);
    delay(delayT);
  }
}
}
