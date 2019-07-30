
void setup() {
  // put your setup code here, to run once:
Serial.begin (9600);
Serial.println("iniciando programa");

}

void loop() {
  Serial.print("tengo flojera de programar");
  while(1){
    Serial.print(".");
    delay(5000);
  }

}
