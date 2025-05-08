/*
Faça um programa que receba um número de usuário e exiba este
número, apenas se for par.
*/

 int numero = 0;

void setup()
{ 
   Serial.begin (9600);
}

void loop()
{
     Serial.println("digite um numero");//pergunta um numero usuário
     while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
     numero = Serial.parseInt();//resposta do usuário
  
   if ( numero % 2 == 0) {
      Serial.println(String(numero) );
 }
   }// fim do loop