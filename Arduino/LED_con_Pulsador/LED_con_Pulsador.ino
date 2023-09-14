// Práctica encender y apagar un LED a través de botón pulsador
const int BOTON=7;
int val;
void setup(){
  pinMode(LED_BUILTIN,OUTPUT);
  pinMode(BOTON,INPUT);
}
void loop(){
  val=digitalRead(BOTON);
  if  (val==HIGH){
    digitalWrite(LED_BUILTIN,HIGH);
  } else { 
    digitalWrite(LED_BUILTIN,LOW);
  }
}
