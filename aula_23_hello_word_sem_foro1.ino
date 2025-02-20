#define verdeLed 13
#define amareloLed 12
#define vermelhoLed 11
#define vercrLed 3
#define amarelcrLed 4
#define vermecrLed 5

#define tempoA 5000
#define tempoB 2000
#define tempoC 3000

void setup() //INICIA O ARDUINO
{
  pinMode(verdeLed,OUTPUT);         // DEFINE PINO 13 COMO SAÍDA
  pinMode(amareloLed,OUTPUT);       // DEFINE PINO 12 COMO SAÍDA
  pinMode(vermelhoLed,OUTPUT);      // DEFINE PINO 11 COMO SAÍDA
  pinMode(vercrLed,OUTPUT);         // DEFINE PINO 5 COMO SAÍDA
  pinMode(amarelcrLed,OUTPUT);      // DEFINE PINO 4 COMO SAÍDA
  pinMode(vermecrLed,OUTPUT);       // DEFINE PINO 3 COMO SAÍDA
 
}
    
 void loop () 
 {
   digitalWrite(verdeLed, HIGH);
   digitalWrite(vermecrLed, HIGH);
   digitalWrite(vermelhoLed, LOW);
   digitalWrite(amarelcrLed, LOW);
  delay(tempoA);
   
   
   digitalWrite(verdeLed, LOW);
   digitalWrite(amareloLed, HIGH);
  delay(tempoB);
   
  digitalWrite(vermecrLed, LOW);
  digitalWrite(vercrLed, HIGH);
  digitalWrite(amareloLed, LOW);
  digitalWrite(vermelhoLed, HIGH);
 delay(tempoC);
    
  digitalWrite(vercrLed, LOW);
  digitalWrite(amarelcrLed, HIGH);
  digitalWrite(vermelhoLed, HIGH);
 delay(tempoB);
  
   
   
   
   
   
              
    
    
   
   
   
}