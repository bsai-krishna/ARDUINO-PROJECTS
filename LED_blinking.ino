//created by B Sai Krishna
//using this you can control the onboard led present on the arduino board.
int a = 13;
void setup() {
  // put your setup code here, to run once:
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(a,HIGH);
delay(1000);
digitalWrite(a,LOW);
delay(1000);
digitalWrite(a,HIGH);
delay(1000);
digitalWrite(a,HIGH);
delay(1000);
}
