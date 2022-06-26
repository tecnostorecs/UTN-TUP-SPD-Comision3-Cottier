const int sensorPin= A0;

void setup()
{
  DDRD = B11111110;   // Establece los pines Arduino 1 a 7 como salidas, pin 0 como entrada 
  pinMode(8,OUTPUT);  // Para npn de display de decenas
  pinMode(9,OUTPUT);  // Para npn de display de unidades
}

void loop()
{ 
  int valor = analogRead(sensorPin);    // Captura el valor del LM35
  float celsius = valor*(500.0/1024);   // Conversion
  
  int decenas = celsius / 10;           // Numero de decenas
  int unidades = celsius - decenas*10;  // Numero de unidades
  
  digitalWrite(8,1);    // Activa display de decenas
  digito(decenas);
  delay(33);
  digitalWrite(8,0);    // Desactiva display de decenas
 
  digitalWrite(9,1);    // Activa display de unidades
  digito(unidades);
  delay(33);
  digitalWrite(9,0);    // Desactiva display de unidades

}

int digito(int x){
    if (x==0){
      PORTD = B11111100;  // Catodo comun 
      //PORTD = B00000010; // Anodo comun
    }
    if(x==1){
      PORTD = B01100000; // Catodo comun
      //PORTD = B10011110; // Anodo comun
    }
    if(x==2){
      PORTD = B11011010; // Catodo comun
      //PORTD = B00100100; // Anodo comun
    }
    if(x==3){
      PORTD = B11110010; // Catodo comun
      //PORTD = B00001100; // Anodo comun
    }
    if(x==4){
      PORTD = B01100110;// Catodo comun
      //PORTD = B10011000; // Anodo comun
    }
    if(x==5){
      PORTD = B10111010;// Catodo comun
      //PORTD = B01000100; // Anodo comun
    }
    if(x==6){
      PORTD = B10111110;// Catodo comun
      //PORTD = B01000000; // Anodo comun
    }
    if(x==7){
      PORTD = B11100000;// Catodo comun
      //PORTD = B00011110; // Anodo comun
    }
    if(x==8){
      PORTD = B11111110;// Catodo comun
      //PORTD = B00000000; // Anodo comun
    }
    if(x==9){
      PORTD = B11110110;// Catodo comun
      //PORTD = B00001000; // Anodo comun
    }
}