/*
Elabore um programa para cálculo de preços de produtos que 
solicite o preço de compra do produto e o percentual a ser 
aplicado em cima desse valor para a venda. Calcule e exiba
o preço de venda do produto. Se o percentual a ser aplicado
for inferior a 50%, exiba uma mensagem informando ao usuário
que o produto será vendido com uma margem muito pequena de lucro.
*/

//Variáveis

float persentualCompra = 0; /*Valor do produto*/
float persentualVenda = 0; /*Percentual*/
float persentualAdicional = 0; /*Margem de lucro*/


void setup()
{
  Serial.begin (9600);
}

void loop()
{
  // cabeçario 
  Serial.println("|------------------------------|");
  Serial.println("|           IF-EX10            |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //Entrada 
  
  Serial.println("digite o valor do produto");//pergunta o valor do produto do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  persentualCompra = Serial.parseFloat();//resposta do usuário
  
  Serial.println("digite por quanto em persentual(%) voce vende o produto");//pergunta o persentual do produto do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  persentualAdicional = Serial.parseFloat();//resposta do usuário
  
  
  //processamento
  
  persentualVenda = persentualCompra + ( persentualCompra / 100 * persentualAdicional );
  
    Serial.println("|----------------------------------------|");
    Serial.println("               " + String( persentualVenda));
  
    if ( persentualCompra +(persentualCompra * 0,5) < persentualVenda  ){
    //entra no if
    Serial.println("    margem muito pequena de lucro");
  }


  //saída - formatada
  
   Serial.println("|----------------------------------------|");
  
   Serial.println("Digite uma letra + <Enter> para continuar");
   while (!Serial.available());
  
   Serial.println();//pula uma linha
   Serial.println();//pula uma linha
  
   Serial.read();//Limpa o cache do /n - o <Enter>
  }