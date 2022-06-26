int const pinLDR = 0;//Definiendo constante de conexión del LDR
int const pinLed = 7;//Defino constante de conexión del Led
int const pinPSR = 6;//Defino consntante conexión del pulsador
int const pinLed2 = 5;//Defino constante conexión del led verde

int valorLDR = 0;//Defino variable para la lectura de los valores de la fotoresistencia
int estadoPSR = 0;//Defino variable para lectura del pulsador

void setup(){
  Serial.begin(9600);//Iniciando comunicación serial del Arduino
  pinMode(pinLed, OUTPUT);//Configuro pin 7 del arduino como una salida
  pinMode(pinPSR, INPUT);//Configuro pin 6 como entrada
  pinMode(pinLed2, OUTPUT);//Configuro pin 5 como salida
}

void loop(){
  digitalWrite(pinLed, LOW);//Comienza apago el LED
  digitalWrite(pinLed2, LOW);//Comienza apago el LED verde
  estadoPSR = digitalRead(pinPSR);//Se asigna al estado del pusador la lectura de este  
  valorLDR = analogRead(pinLDR);//Se le asigna los valores obtenidos a la variable
  Serial.println(valorLDR);//Muestra el valor del LDR por el monitor serial
  if(valorLDR < 400){//Condición si el valor es menor a ...
    digitalWrite(pinLed, HIGH);//Enciende el Led
  }
  if (estadoPSR == HIGH){//Condición si el pulsador esta presionado
    digitalWrite(pinLed2, HIGH);//Enciende el led verde
  }
    
  delay(250);//Tiempo para ejecutar instrucción
}