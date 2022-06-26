// C++ code
//
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  analogWrite(11, 127);
  analogWrite(10, 255);
  analogWrite(9, 212);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(11, 123);
  analogWrite(10, 104);
  analogWrite(9, 238);
  delay(2000); // Wait for 2000 millisecond(s)
  analogWrite(11, 255);
  analogWrite(10, 127);
  analogWrite(9, 80);
  delay(2000); // Wait for 2000 millisecond(s)
}