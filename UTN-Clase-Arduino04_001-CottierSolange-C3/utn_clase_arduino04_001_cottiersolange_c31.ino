int luz1=10;
int luz2=11;
int luz3=12;
int IMAGEN=A0;
int VALOR=0;
int fuerza=500;

void setup()
{
  
  pinMode(luz1,OUTPUT);
  pinMode(luz2,OUTPUT);
  pinMode(luz3,OUTPUT);
  Serial.begin (9600);
 }
void loop () 
{
  VALOR=analogRead(IMAGEN);
  Serial.print("A la velocidad de la luz");
  Serial.println(VALOR);
  delay(1000);
   if (VALOR>fuerza)
  {
    digitalWrite(luz1,LOW);
    digitalWrite(luz2,LOW);
    digitalWrite(luz3,LOW);
  }
  else if (VALOR<fuerza)
  {
    digitalWrite(luz1,HIGH);
    digitalWrite(luz2,HIGH);
    digitalWrite(luz3,HIGH);
  }
}