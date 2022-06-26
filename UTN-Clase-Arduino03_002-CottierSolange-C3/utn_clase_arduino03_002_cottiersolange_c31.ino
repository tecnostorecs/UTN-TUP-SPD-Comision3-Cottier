int pinParalelos=3;
int pinLedMotorSerie=5;
int pinMotor=9;
const int boton=2;
const int MotorLed=7;
int Boton=0;

void setup(){
  
  
  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(boton, INPUT);
pinMode(MotorLed, OUTPUT);
Serial.begin(9600);

  
}

void loop(){
  
  digitalWrite(3, 1);
  delay(1000); 
  digitalWrite(3, 0);
  delay(1000);
    digitalWrite(3, HIGH);
  delay(3000); 
  digitalWrite(3, LOW);
  delay(2000);
    digitalWrite(3, 1);
  delay(500); 
  digitalWrite(3, 0);
  delay(500);

    digitalWrite(5, HIGH);
  delay(3000); 
  digitalWrite(5, LOW);
  delay(1000);

  for(int x=0; x<=255; x++){
    analogWrite(9, x);
    delay(10);
    
     
    
    Boton=digitalRead(boton);
Serial.println(Boton);
if(Boton == HIGH) {
digitalWrite(MotorLed, HIGH);
} else  {
digitalWrite(MotorLed,  LOW);
}
  }
}