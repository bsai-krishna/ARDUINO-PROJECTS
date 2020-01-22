#include<DHT.h>
#define DHTPIN 3
#define DHTTYPE DHT11
#define led 7
int maxhum=32;
int maxtemp=38;
DHT dht(DHTPIN,DHTTYPE);
void setup(){
pinMode(led,OUTPUT);
Serial.begin(9600);
dht.begin();
}
void loop(){
delay(2000);
float h=dht.readHumidity();
float t=dht.readTemperature();
if(isnan(h)||isnan(t)) //isnan=is not a number
{
  Serial.println("Failed to read from sensor"); //println is used when we need to print a statement
  return;
}
if(h>maxhum||t>maxtemp)
{digitalWrite(led,LOW);
}
else
{
digitalWrite(led,HIGH);
}
Serial.print("Humidity:");
Serial.print(h);
Serial.print("%\t");
Serial.print("Temperature:");
Serial.print(t);
Serial.print("*C\n");
}

