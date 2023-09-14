const int pinEntrada = 2;
int counter = 0; 
boolean valor_pulsador=HIGH;
 
 
void setup()
{
   pinMode(pinEntrada, INPUT_PULLUP);
   Serial.begin(115200);   
}
 
void loop()
{
   if (digitalRead(pinEntrada) != valor_pulsador)
   {
      delay(200);       // uncoment to avoid debounce problem 
      counter ++;
      Serial.println(counter);  //  <2>
      valor_pulsador = !valor_pulsador;     
   }
}
