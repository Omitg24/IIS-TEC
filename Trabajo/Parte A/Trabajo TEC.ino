// C++ code
void setup(){
	pinMode(A0, INPUT);
  	pinMode(8, OUTPUT);
}

void loop(){
 	int valor_digital = digitalRead(A0);	
	if (valor_digital == HIGH){
		digitalWrite(8,HIGH);
	}else if (valor_digital == LOW){
		digitalWrite(8,LOW);	    	   	
	}
}