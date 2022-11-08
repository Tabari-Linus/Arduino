int YellowPin = 10;
int bright = 64;


void setup() {
  // put your setup code here, to run once:
pinMode(YellowPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(YellowPin,bright);

}
