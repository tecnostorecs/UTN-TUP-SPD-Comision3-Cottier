int valor = 0; //Creamos una variable que almacene el valor de la medicion

void setup()
{
  pinMode(12, OUTPUT);
}

void loop()
{
  valor = analogRead(0); //Leemos el pin A0 y guardamos el numero en valor
  if (valor>=500){       // Si el valor en mayor o igual a 500 se enciende el led conectado al pin 12, de lo contrario, se apaga
  digitalWrite(12, HIGH);
  }else{
    digitalWrite(12, LOW);
  }
}