int pulsador2=2;
int pulsador3=3;
int pulsador7=7;
int pulsador8=8;

int led9=9;
int led10=10;
int led11=11;
int led12=12;
int led13=13;
int pote;

void setup()
{
  Serial.begin(9600);
  pinMode(pulsador2,INPUT);
  pinMode(pulsador3,INPUT);
  pinMode(pulsador7,INPUT);
  pinMode(pulsador8,INPUT);
  
  pinMode(led9,OUTPUT);
  pinMode(led10,OUTPUT);
  pinMode(led11,OUTPUT);
  pinMode(led12,OUTPUT);
  pinMode(led13,OUTPUT);
}

void loop()
{
 Serial.println(pote);
  pote=analogRead(A5);
  
 if(digitalRead(pulsador2)==HIGH)
  {
   digitalWrite(led13, HIGH);
   digitalWrite(led12, HIGH);
   digitalWrite(led11, HIGH);
   digitalWrite(led10, HIGH);
   digitalWrite(led9, HIGH);
   delay(1000);
   digitalWrite(led13, LOW);
   digitalWrite(led12, LOW);
   digitalWrite(led11, LOW);
   digitalWrite(led10, LOW);
   digitalWrite(led9, LOW);
   delay(1000);
  }
  if(digitalRead(pulsador3)==HIGH)
  {
   digitalWrite(led13, HIGH);
   digitalWrite(led12, HIGH);
   digitalWrite(led11, HIGH);
   digitalWrite(led10, HIGH);
   digitalWrite(led9, HIGH);
  }
  if(digitalRead(pulsador7)==HIGH)
  {
   digitalWrite(led13, LOW);
   digitalWrite(led12, LOW);
   digitalWrite(led11, LOW);
   digitalWrite(led10, LOW);
   digitalWrite(led9, LOW);
  }  
  if(digitalRead(pulsador8)==HIGH)
  {
  if(pote==1023)
  {
   digitalWrite(led13, HIGH);
   digitalWrite(led12, LOW);
   digitalWrite(led11, LOW);
   digitalWrite(led10, LOW);
   digitalWrite(led9, LOW);
  }  
   if(pote==859)
  {
   digitalWrite(led12, HIGH);
   digitalWrite(led13, LOW);
   digitalWrite(led11, LOW);
   digitalWrite(led10, LOW);
   digitalWrite(led9, LOW);
   
  }   
   if(pote==777)
  {
   digitalWrite(led11, HIGH);
   digitalWrite(led13, LOW);
   digitalWrite(led12, LOW);
   digitalWrite(led10, LOW);
   digitalWrite(led9, LOW);
  }   
   if(pote==511)
  {
   digitalWrite(led10, HIGH);
   digitalWrite(led13, LOW);
   digitalWrite(led12, LOW);
   digitalWrite(led11, LOW);
   digitalWrite(led9, LOW);
  }   
   if(pote==205)
  {
   digitalWrite(led9, HIGH);
   digitalWrite(led13, LOW);
   digitalWrite(led12, LOW);
   digitalWrite(led11, LOW);
   digitalWrite(led10, LOW);
  }
  }
}