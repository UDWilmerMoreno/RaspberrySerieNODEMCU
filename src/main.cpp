#include <Arduino.h>

#define LedUno 16
char dato;
void setup()
{
  Serial.begin(9600);
  pinMode(LedUno, OUTPUT);
  digitalWrite(LedUno, LOW);
}

void loop()
{
  if (Serial.available() > 0)
  {
    dato = Serial.read();
    switch (dato)
    {
    case 'e':
      digitalWrite(LedUno, HIGH);
      Serial.println("w");
      break;
    case 'a':
      digitalWrite(LedUno, LOW);
      Serial.println("s");
      break;
    default:
      Serial.println("Caracter no reconocido");
      break;
    }
  }
}