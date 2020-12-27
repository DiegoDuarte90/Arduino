void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  int tiempo=5000;
  digitalWrite(13, HIGH);
  delay(tiempo);
  digitalWrite(13, LOW);
  delay(tiempo);
}
