/*
Uma empresa decide dar aumento de 30% aos funcionários cujo
salário é inferior a 500 reais. Escreva um programa que receba
o salário de um funcionário e imprima o valor do salário
reajustado ou uma mensagem caso o funcionário não tenha direito
a aumento.
*/

//Variáveis

float salario = 0;

void setup()
{
  Serial.begin (9600);
}

void loop()
{
  // cabeçario 
  Serial.println("|------------------------------|");
  Serial.println("|           IF-EX8             |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //Entrada 
  
  Serial.println("Digite seu salario");//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salario = Serial.parseFloat();//resposta do usuário
  
  //processamento
  if ( salario < 500 )
{
    salario = salario + (salario * 0.3);
    
    Serial.println();//pula uma linha
    Serial.println();//pula uma linha
    Serial.println("Relatorio");
    Serial.println();//pula uma linha
    Serial.println("|----------------------------------------|");
    Serial.println("     novo salario: R$ " + String (salario));
  } else { 
    
    Serial.println();//pula uma linha
    Serial.println();//pula uma linha
    Serial.println("Relatorio");
    Serial.println();//pula uma linha
    Serial.println("|----------------------------------------|");
    Serial.println("        salario: R$ " + String (salario));
    Serial.println(" voce nao tem direito a aumento, lamento");}
  

  //saída - formatada
  
   Serial.println("|----------------------------------------|");
  
   Serial.println("Digite uma letra + <Enter> para continuar");
   while (!Serial.available());
  
   Serial.println();
   Serial.println();
  
   Serial.read();//Limpa o cache do /n - o <Enter>
  }