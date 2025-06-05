/*while - é uma estrutura de repetição que só executa repetição/laço enquanto
a codição for verdadeira
*/

void setup()
{
  Serial.begin(9600);
}
//função

void loop()
{
  //o 0 tambem conta
  //while
  int contadorWhile = 5; //variavel local

  while ( contadorWhile >= 1){
    Serial.println("contador While: " + String( contadorWhile));
    contadorWhile--; 
    delay(1200);  
  }
 
}