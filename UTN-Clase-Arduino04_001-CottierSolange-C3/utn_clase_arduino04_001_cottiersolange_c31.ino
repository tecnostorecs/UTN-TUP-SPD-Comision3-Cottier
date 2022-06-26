int val;
int led=8;
void setup(){
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop(){
  val=analogRead(A0);
  Serial.print(A0);
  Serial.println(val);
  val=map(val,54,974,255,0);
  analogWrite(led,val);
}
