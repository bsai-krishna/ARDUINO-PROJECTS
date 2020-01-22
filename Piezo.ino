int led1=13;              //LED1 is connected to digital pin13
int led2=12;              //LED2 is connected to digital pin12
int led3=11;              //LED3 is connected to digital pin11
int piezoPin=A0;          //Piezo Sensor is connected to analogue pin A0
int threshold1=50;        //Representative value of pressure input
int threshold2=300;
int threshold3=600;
void setup() {
Serial.begin(9600);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
pinMode(led3,OUTPUT);
pinMode(piezoPin,INPUT);
}
void loop() {
int a=analogRead(piezoPin);
delay(700);
Serial.println(a);
if(a<threshold1){
digitalWrite(led1,LOW);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
}
if(a>threshold1 && a<threshold2){
digitalWrite(led1,HIGH);
digitalWrite(led2,LOW);
digitalWrite(led3,LOW);
}
if(a>threshold2 && a<threshold3){
digitalWrite(led1,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led3,LOW);
}
if(a>threshold3){
digitalWrite(led3,HIGH);
digitalWrite(led2,HIGH);
digitalWrite(led1,HIGH);
}
}

