int YellowPin = 10;
int dim = 0;
int bright = 64;
int brighter = 127;
int brightest = 255;

void setup() {
  // put your setup code here, to run once:
pinMode(YellowPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(YellowPin,dim);
delay(1000);
analogWrite(YellowPin,bright);
delay(1000);
analogWrite(YellowPin,brighter);
delay(1000);
analogWrite(YellowPin,brightest);
delay(1000);
}
