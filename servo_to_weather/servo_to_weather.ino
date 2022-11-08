#include <Servo.h>
int lightVal;
int lightPin  =A4;
int servoPos;
int servoPin = 9;
int dt = 250;
Servo myServo;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightPin,INPUT);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal = analogRead(lightPin);
Serial.println(lightVal);
delay(dt);

servoPos = (-16./57.)*lightVal+(16.*570./57.);
myServo.write(servoPos);
}
