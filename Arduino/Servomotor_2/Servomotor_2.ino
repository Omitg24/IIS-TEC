  #include <Servo.h>
  
  Servo servoX;
  Servo servoY;

  int potPinX = 0;  //pines usados para el potenciometro
  int potPinY = 1;

  int valX; //variable x 
  int valY; //variable y
void setup() {
  // put your setup code here, to run once:
  servoX.attach(9); //asociar al pin X
  servoY.attach(10);  //asociar al pin Y
}

void loop() {
  // put your main code here, to run repeatedly:
  valX = analogRead(potPinX); //Leer el pin X
  valX = map(valX, 0, 1023, 0, 180);
  servoX.write(valX);
  
  valY = analogRead(potPinY); //Leer el pin Y
  valY = map(valY, 0, 1023, 0, 180);
  servoY.write(valY);
  
  delay(15);
}
