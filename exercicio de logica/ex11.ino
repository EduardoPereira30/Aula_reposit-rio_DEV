// Faça um programa que receba a idade de uma pessoa em anos e
//imprima essa idade em: Meses, Dias, Horas, Minutos.

//variaveis
int idade = 0;//inicia a idade
long idadeMeses = 0; // inicia idade em meses
long idadeDias = 0;
long idadeHoras = 0;
long idadeMinutos = 0;

void setup()
{
Serial.begin(960000);
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
  Serial.println("Digite a sua idade");// Perguta a idade do usuario
  while(!Serial.available()){}//Aguarda o usuario digidar
  idade = Serial.parseInt();
  
  //processamente
  idadeMeses = idade * 12;
  idadeDias = idade * 364;
  idadeHoras = idade* 364 * 24;
  idadeMinutos = idadeHoras * 60;
  
  //saída
  Serial.println("sua idade em meses: " + String(idadeMeses) );
  Serial.println("sua idade em dias: " + String(idadeDias) );
  Serial.println("sua idade em Horas: " + String(idadeHoras) );
  Serial.println("sua idade em minutos: " + String(idadeMinutos) );
}