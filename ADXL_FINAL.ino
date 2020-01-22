 int av1=A3;
int av2=A4;
int a,b,x,y;
void setup() {
 
 a=analogRead(av1);        
 b=analogRead(av2);

 Serial.begin(9600);
}
void loop() {
x=analogRead(av1);
y=analogRead(av2);
Serial.println("------");
Serial.print("X value: "); 
Serial.println(x-a);
Serial.print("Y value");
Serial.println(y-b); 
delay(300);

 //for left led
 if(x-a>30)
 {

 Serial.println("LEFT");
 }
//for right led
 if(a-x>30)
 {
 
 Serial.println("RIGHT");
 }

if(b-y>30)
 {
 
 Serial.println("FORWARD");
 }

 if(y-b>30)
 {
 
 Serial.println("BACK");
 }
 delay(100);
}

