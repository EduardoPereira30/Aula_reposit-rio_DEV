/*
Calcule a média entre duas notas.
Verifique se o aluno foi aprovado:
Aprovado se média é MAIOR OU IGUAL A 6 e SE A frequênciaÉ MAIOR OU IGUAL 75%.
Caso contrário, exiba se foi reprovado por nota, por frequência ou por ambos.
Se a média for exatamente 10, exiba: "Parabéns! Nota máxima!
*/

// variaveis

int nota1 = 0;
int nota2 = 0;
float media = 0;
int faltas = 0;
int persentualFrequencia = 0;

void setup()
{
 Serial.begin(9600);
}

void loop()
{
  Serial.println(" Digite primeira nota ");
  while (! Serial.available());
  nota1 = Serial.parseInt();
  
    Serial.println(" Digite segunda nota ");
  while (! Serial.available());
  nota2 = Serial.parseInt();
  
  float media = (nota1 + nota2)/2;
  
   Serial.println("quantos dias voce faltou ");
     while(! Serial.available() );// não lembrei da palavra available
     faltas = Serial.parseInt();// não lembrei da palavra parse
  
 persentualFrequencia = ( 100 - faltas * 8/800)*100/;
  
  if ( media == 10 && persentualFrequecia <= 75) {
   Serial.println("Parabéns! Nota máxima!");
   Serial.println("Nota: 10");
   Serial.println("frequencia:" + String (persentualFrequencia));
    
    
  } if else (media <= 6 && persentualFrequecia <= 75){
   Serial.println("Parabéns! voce passou!");
   Serial.println("Nota: " + String(media));
   Serial.println("frequencia: " + String (persentualFrequencia));
    
    
  } if else (media >= 6 && persentualFrequecia <= 75) {
   Serial.println(" voce reprovou ,por conta de nota");
   Serial.println("Nota: " + String(media));
   Serial.println("frequencia: " + String (persentualFrequencia));
  
  }
  
  
  
  
    
    
    
    
  


}