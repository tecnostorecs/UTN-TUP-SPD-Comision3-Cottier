const int led1 = 11;
const int led2 = 12;
const int led3 = 13;

void setup()
{
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  int boton1 = digitalRead(2);
  if (boton1 == 1)
  {
    digitalWrite(led1, HIGH);
    notasMusicales();
    digitalWrite(led1, LOW);
    }
  int boton2 = digitalRead(3);
  if (boton2 == 1)
   {
    digitalWrite(led2, HIGH);
    piratasCaribe();
    digitalWrite(led2, LOW);
    } 
  int boton3 = digitalRead(4);
  if (boton3 == 1)
   {
  	digitalWrite(led3, HIGH);
    himnoAlegria();
    digitalWrite(led3, LOW);
   }
}

void notasMusicales()
{
  tone(8,523.25,100);
  delay(500);
  tone(8,587.33,100);
  delay(500);
  tone(8,659.26,100);
  delay(500);
  tone(8,698.46,100);
  delay(500);
  tone(8,783.99,100);
  delay(500);
}

void piratasCaribe()
{
  tone(9,587.33,100);
  delay(300);
  tone(9,587.33,100);
  delay(100);
  tone(9,659.25,100);
  delay(100);
  tone(9,698.45,100);
  delay(200);
  tone(9,698.45,100);
  delay(200);
  tone(9,783.99,100);
  delay(200);
  tone(9,880,100);
  delay(100);
  tone(9,587.33,100);
  delay(300);
  tone(9,587.33,100);
  delay(300);
  tone(9,587.33,100);
  delay(100);
  tone(9,659.25,100);
  delay(100);
  tone(9,698.45,100);
  delay(200);
  tone(9,698.45,100);
  delay(200);
  tone(9,783.99,100);
  delay(200);
  tone(9,880,100);
  delay(100);
  tone(9,587.33,100);
  delay(300); 
}

void himnoAlegria()
{
  tone(10,493.88,100);
  delay(500);
  tone(10,493.88,100);
  delay(500);
  tone(10,523.25,100);
  delay(500);
  tone(10,1174.66,100);
  delay(500);
  tone(10,1174.66,100);
  delay(500);
  tone(10,523.25,100);
  delay(500);
  tone(10,493.88,100);
  delay(500);
  tone(10,440,100);
  delay(500); 
  tone(10,392,100);
  delay(500);
  tone(10,392,100);
  delay(500);
  tone(10,440,100);
  delay(500);
  tone(10,493.88,100);
  delay(500);
  tone(10,440,100);
  delay(700);
  tone(10,392,100);
  delay(400);
  tone(10,392,100);
}