//Faça um programa que receba um número e exiba o seu dobro.

//variaveis
  int numero = 0;
  int dobro  = 0; 

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
  
  //entrada
  Serial.println("Digite um numero");// Perguta um numero qualquer ao usuario
  while(!Serial.available()){}//Aguarda o usuario digidar
  numero = Serial.parseInt();
  
  //processamento
  dobro = numero * 2;
  
  //saida
  Serial.println("o dobro do numero eh: " + String(dobro) );
}