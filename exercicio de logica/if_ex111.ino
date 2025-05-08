/* Faça um programa que receba um número inteiro do usuário e
informe se este número é positivo ou negativo.
*/

// variavel 
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
  
   if ( numero >= 0) {
      Serial.println("Numero positivo");
 } else {
      Serial.println("Numero negativo");
 }