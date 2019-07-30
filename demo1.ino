
int pinled =8;

void setup() {
  
  Serial.begin (9600);
  Serial.println("encender led");
  pinMode(pinled,OUTPUT);

}

void loop() {
 Serial.println ("PIN 8 -> ON");
 digitalWrite (pinled,HIGH);
 delay(500);
 Serial.println ("PIN 8 -> OFF");
  digitalWrite (pinled,LOW);
  delay(500);


}
