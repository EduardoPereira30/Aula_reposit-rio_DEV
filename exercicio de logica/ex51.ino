//Faça um programa que receba a medida em centímetros e exiba esse
//número em polegadas. OBS: Uma polegada equivale a 2.54
//centímetros.

//Variáveis
float Cm = 0;
float Polegada = 0;

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
  Serial.println("Digite uma medida em centimetros");//pergunta uma medida em centímetros da escolha do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  Cm = Serial.parseFloat();//resposta do usuário
  
 //processamento
 Polegada = Cm * 2.54;
  
 //saída
 Serial.println("A conversao de centimetro em polegada eh: " + String (Polegada) );
 delay(9000);//aguarda 9 segundos antes de rodar o loop noe
}
