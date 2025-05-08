/*
Faça um programa que receba 4 notas de um aluno, calcule e
imprima a média aritmética das notas e a mensagem de 
    APROVADO para média superior ou igual a 7,0 >=
    RECUPERAÇÃO para notas entre 5.0 e 7,0 ou a mensagem de >=5 && <=7 
    REPROVADO para média inferior a 5,0.
*/

//variaveis
float n1, n2, n3, n4, media;//cria as 5 de uma vez e inisia 

void setup()
{
 Serial.begin(9600);
}

void loop()
{
//entrada 
  Serial.println("digite a primeira nota");
  while (!Serial.available());
  n1= Serial. parseFloat();
  
  Serial.println("digite a segunda nota");
  while (!Serial.available());
  n2= Serial. parseFloat();
  
  Serial.println("digite a terceira nota");
  while (!Serial.available());
  n3= Serial. parseFloat();
  
  Serial.println("digite a quarta nota");
  while (!Serial.available());
  n4= Serial. parseFloat();
  
 //processamento
  
  media=( n1+n2+n3+n4 )/4;
  
  Serial.println("Media: " + String (media));
    
  if      ( media >= 7) {
  Serial.println("aprovado"); } 
  else if ( media >= 5 && media < 7 )
  {
   Serial.println("recuperacao");
  }
  else    ( media < 5)
  {
   Serial.println("reprovado");
  }
}
