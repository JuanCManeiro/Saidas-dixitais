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
/* Vale agora si que detectei o fallo no programa, a miña
  secuencia facia que cando se activaba o rego o led acendia
    en calquera das secuencias, pero ainda que cambiase de secuencia 
      ou que o rego se desactivase o led permanecia aceso xa que ningúnha 
        orde lle decia que tiña que apagarse*/
// C++ code
// 
   /* definimos os pulsadores como as entradas do sistema A, B e C, 
por defecto dalles un 0 o estado baixo coa resistencia en formato pull-down 
  esto continuara asi, en caso de poñer pull-up o pulsador funcionara á inversa
**************/ 
int A = 0;

int B = 0;

int C = 0;

void setup()
  /** marcamos como entradas os pins 10, 9 e 8 e como saídas os pins 12 e o 13
 que se corresponde co led integrado, tamen definimos o "serial begin" que ven sendo 
 o monitor en serie donde a cada orde lle dou "voz" para corrovorar que se fai o paso 
 a traves dela 
  **/
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
        digitalWrite(12, LOW);/*este foi o cambio que fixo que se apagase o led cando 
    o rego estivese desactivado*/
        digitalWrite(LED_BUILTIN, HIGH);
        delay(4000); // Wait for 4000 millisecond(s)
        Serial.println("non fai falla regar");
      }
    }
  }
}  
/* Nesta parte engadín un led multicor para ver na montaxe cal
é a saía que esta activa dando unha cor a cada unha das etapas, 
desta maneira seria como se o led que acende o pin 12 fose o motor do rego 
e o led multicor o que nos indica que tipo de rego se fai e se esta operativo
*/
// C++ code
//
int A = 0;

int B = 0;

int C = 0;

void setup()//novas saidas 5, 6, 7
{
  pinMode(10, INPUT);
  pinMode(9, INPUT);
  pinMode(8, INPUT);
  pinMode(12, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  A = digitalRead(10);
  B = digitalRead(9);
  C = digitalRead(8);
  if (((!(A == HIGH)) && B == HIGH) && (!(C == HIGH))) {
    digitalWrite(12, HIGH);
    digitalWrite(5, HIGH);
    delay(2000); // Wait for 2000 millisecond(s)
    Serial.print(" rego 1");
  } else {
    if ((A == HIGH && B == HIGH) && (!(C == HIGH))) {
      digitalWrite(12, HIGH);
      digitalWrite(6, HIGH);
      delay(2000); // Wait for 2000 millisecond(s)
      Serial.print(" rego 2");
    } else {
      if ((A == HIGH && B == HIGH) && C == HIGH) {
        digitalWrite(12, HIGH);
        digitalWrite(7, HIGH);
        delay(2000); // Wait for 2000 millisecond(s)
        Serial.print(" rego 3");
      } else {// importante dar a orde para que se apague tanto o motor como o led indicador de estado
        digitalWrite(12, LOW);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        digitalWrite(7, LOW);
        digitalWrite(LED_BUILTIN, HIGH);
        delay(4000); // Wait for 4000 millisecond(s)
        Serial.println("non fai falla regar");
      }
    }
  }
}
/*cambio feito*/
// agora tentarei introducir un rele na montaxe que active o motor do rego
