#define pul1 A0
#define pul2 A1
#define pul3 A2
#define led 2

//Variables para almacenar el estado lógico de los pulsadores

boolean set;
boolean mas;
boolean menos;

//Variable para hacer un antirrebote

boolean estadoAnterior = 0;
//Con esta variable, dependiendo de su valor vamos a encender o apagar el led
short x;
//Variable utilizada para modificar el tiempo del parpadeo
int tiempo = 100;

void setup() {
  Serial.begin(9600);
  pinMode(pul1, INPUT);
  pinMode(pul2, INPUT);
  pinMode(pul3, INPUT);
  pinMode(led, OUTPUT);
}

void selec() {

  set = digitalRead(pul3); // Verificamos el estado lógico del pulsador set

  if (set != estadoAnterior) { // Si el estado actual del pulsador "set" es diferente al estado anterior, entonces continuamos
    if (set == HIGH) { // Si el estado del pulsador es igual a 1(Si presionamos el pulsador), entonces:
      x++; //Sumamos una la variable x;
    }
  }

  delay(50); //Establecemos una pausa de 50ms 
  estadoAnterior = set; //El valor de la variable estadoAnterior va a ser igual al valor del estado actual

  // La variable x va a tener 2 valores 0 y 1 cero para apagar el led y uno para encenderlo

  if (x == 2 ) { // Cuando la variable x llegue a 2: 
    x = 0;  // Enceramos x.
  }
}

void loop() {

  selec();
  
  if (x == 1) { //Si es igual a 1 (Si presionamos el pulsador), entonces:
   
    digitalWrite(led, HIGH); //Encendemos el led por un tiempo
    delay(tiempo);
    digitalWrite(led, LOW); //Apagamos el led por un tiempo
    delay(tiempo);    
    // Para controlar el tiempo de encendido y apagado del led (Velocidad del parpadeo, utilizamos los dos pulsadores restantes.
    // Almacenamos en las variables mas y menos los estados lógicos de los pulsadores

    mas = digitalRead(pul2); 
    menos = digitalRead(pul1);

    if (mas == HIGH) { // Si presionamos mas, entonces:
      tiempo = tiempo + 100; //Sumamos el valor de la variable tiempo + 100, disminuimos la velocidad del parpadeo 
      delay(10);
    }

    if (menos == HIGH) { // Si presionamos menos, entonces:
      tiempo = tiempo - 100;//Restamos el valor de la variable tiempo - 100, aumentamos la velocidad del parpadeo
      delay(10);
    }

    // Los siguientes son limites que ustedes pueden modificar a su conveniencia

    if (tiempo <= 100) { // Valor mínimo que tomara la variable tiempo.
      tiempo = 100;
    }

    if (tiempo > 3000) { // Valor máximo que tomara la variable tiempo.
      tiempo = 3000;
    }

   selec(); // Verificamos si se ha presionado el pulsador selec

  } else {
    // Si presionamos nuevamente el pulsador set, el led se apagara.
    digitalWrite(led, LOW);
  }
}