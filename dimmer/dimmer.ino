void setup() {
  pinMode(5, OUTPUT);
}

void loop() {
  analogWrite(5, analogRead(A0) / 4);
}
