# Saidas-dixitais
Practica 16 moi similar a 15
/* esta vez esplicaremos un pouco mais extenso cada proceso, primeiro
  partimos da p15 e buscamos porque o led non apagaba*/
  // C++ code
//
int A = 0;

int B = 0;

int C = 0;

void setup()
{
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(12, OUTPUT);
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);
  if (((!(A == HIGH)) && B == HIGH) && (!(C == HIGH))) {
    digitalWrite(12, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    Serial.print(" rego 1");
  } else {
    if ((A == HIGH && B == HIGH) && (!(C == HIGH))) {
      digitalWrite(12, HIGH);
      delay(2000); // Wait for 2000 millisecond(s)
      Serial.print(" rego 2");
    } else {
      if ((A == HIGH && B == HIGH) && C == HIGH) {
        digitalWrite(12, HIGH);
        delay(2000); // Wait for 2000 millisecond(s)
        Serial.print(" rego 3");
      } else {
        digitalWrite(LED_BUILTIN, HIGH);
        delay(4000); // Wait for 4000 millisecond(s)
        Serial.println("non fai falla regar");
      }
    }
  }
}
  
