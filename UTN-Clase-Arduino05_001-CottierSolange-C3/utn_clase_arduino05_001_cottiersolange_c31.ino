/* Piezo con placa arduino,tono tipo video juego
*/

int pin = 7 ;

void setup() {
 pinMode(pin, OUTPUT) ; 
}

void loop() {
  //esempio 1
  //tone(pin, 220, 100);  /* 1 */
  //delay( 400 );		  /* 2 */
	
  //esempio 2
  //tone(pin, 220);
  //delay(200);
  //noTone(pin);
  
  //esempio 3
  int nota = random(200, 1000);
  tone(pin, nota, 100);
  delay(100);
}

/* 1 220=freq.(220=la), 100=millisec.attivo
   
   2 100 suono continuo 
     200 con pausa
*/