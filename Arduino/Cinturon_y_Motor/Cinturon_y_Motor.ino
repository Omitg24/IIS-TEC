void setup() {
  pinMode(2, INPUT_PULLUP); //cinturon de seguridad
  pinMode(3, OUTPUT); //buzzer
  pinMode(4, INPUT_PULLUP); //motor
}

void loop() {
  digitalWrite(3, !digitalRead(2) && digitalRead(4)); //motor encendido (0) y cinturon no puesto (1)
}
