//Faça um programa que receba a medida em polegadas e exiba esse número em
//centímetros.


//Variáveis
float Polegada = 0;
float Cm = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // cabeçario 
  Serial.println("|------------------------------|");
  Serial.println("|          LOPAL-EX2           |");
  Serial.println("|------------------------------|");
  Serial.println();//pula uma linha
  Serial.println();//pula uma linha
  
  //Entrada 
  Serial.println("Digite uma medida em polegadas");//pergunta uma medida em polegadas da escolha do usuário
  while(! Serial.available());//espera o usuário digitar/dar um <Enter>
  Polegada = Serial.parseFloat();//resposta do usuário
  
 //processamento
 Cm = Polegada / 2.54;
  
 //saída
 Serial.println("A conversao de centimetro para polegada eh: " + String (Cm));
 delay(9000);//aguarda 9 segundos antes de rodar o loop novamente
}
