//created by B sai krishna
//This mini project helps u understand the use of ultrasonic sensor
//refer to ultrasonic_circuit.JPG for connections
const int trigPin =4 ;
const int echoPin =2 ;
const int led=13;                   
void setup() {  
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  long duration, distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.41; 
  if (distance >= 80 || distance <0)
  {
    Serial.println("too far to calculate ");
  }
  else
  {
   Serial.print(distance); 
   Serial.println(" cm");
  }
  delay(500);
  if(distance<35){
    digitalWrite(led,HIGH);
    Serial.println("LED on");
  }
  else
  {
    digitalWrite(led,LOW);
  }
}
