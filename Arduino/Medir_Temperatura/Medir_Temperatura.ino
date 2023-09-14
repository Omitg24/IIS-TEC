const int pin = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(pin, INPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  int valor_digital = analogRead(pin);
  double V0 = valor_digital * 5.0 / 1023.0;
  double RTH = (50000.0/V0) - 10000.0;
  double AUX = (1.0/298.0) + (1.0/3977.0) * log(RTH/10000.0);
  double T = 1.0/AUX - 273.15;

  Serial.println("Valor digital: ");
  Serial.println(V0);
  delay(500);
  Serial.println("Temperatura: ");
  Serial.println(T);
  delay(500);
}
