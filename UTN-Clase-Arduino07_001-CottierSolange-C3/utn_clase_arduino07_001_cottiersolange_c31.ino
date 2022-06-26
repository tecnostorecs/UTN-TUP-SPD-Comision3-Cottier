#include <IRremote.h>
// Definiciones para la biblioteca IRremote
IRrecv irrecv(11);
decode_results result;

unsigned int valor;
void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn(); 
}

void loop() {
  // irrecv.decode() retorna true si se recibio algo
  // Si es true, almacena resultado en el argumento
  if (irrecv.decode(&result)) {
    valor = result.value; 
    Serial.println(valor, HEX);
    irrecv.resume(); // Recibe el siguiente valor
  }
}