// Faça um programa que receba o ano de nascimento de uma pessoa e
//o ano atual. Calcule e imprima:

 // variaveis
   int anoNasceu = 0;
   int anoAtual = 0;
   int idade = 0; 
   int idadeSemanas = 0;

void setup()
{
 Serial.begin(96000);
}

void loop()
{
 // cabeçario 
  Serial.println("|------------------------------|");
  Serial.println("|          LOPAL-EX2           |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  
  
 // entrada
  Serial.println("Digite o ano em que voce nesceu");// Perguta o ano do nascimento do usuario
  while(!Serial.available()){}//Aguarda o usuario digidar
  anoNasceu = Serial.parseInt();
  
 // processamento
  idade = 2025 - anoNasceu;
  idadeSemanas = idade * 52;
  
 // saida
  Serial.println("sua idade eh: " + String(idade) );
  Serial.println("sua idade em semanas: " + String(idadeSemanas) );
  delay(9000);
}