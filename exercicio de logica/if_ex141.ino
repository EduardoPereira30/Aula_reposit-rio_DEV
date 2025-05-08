/*
Faça um programa receba dois valores e imprima qual é o maior número
digitado
*/
 int numero1 = 0;
 int numero2 = 0;

void setup()
{ 
   Serial.begin (9600);
}

void loop()
{
     Serial.println("digite um numero");//pergunta um numero usuário
     while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
     numero1 = Serial.parseInt();//resposta do usuário
  
     Serial.println("digite outro numero");//pergunta um numero usuário
     while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
     numero2 = Serial.parseInt();//resposta do usuário

  
   if ( numero1 > numero2) {
      Serial.println(String(numero1) + (" eh meior") );
   }else{
     Serial.println(String(numero2) + (" eh meior") );
   }
 }// fim do loop