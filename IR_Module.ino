const int irs = 7;
const int led = 8;
int detect;
void setup() {
  pinMode (irs, INPUT);
  pinMode (led, OUTPUT); 
  Serial.begin (9600);
}

void loop() {
  detect = digitalRead (irs);
  Serial.println(detect);
  if (detect == HIGH)
  {
    digitalWrite (led, HIGH);
  }
  else
  {
    digitalWrite (led, LOW);
  }
  delay (200);
}
