// C++ code
//Varíaveis Globais
String frutas[6];
float precosFrutas[6];
String frutaDigitada;
String precoDigitado;
void setup()
{
  Serial.begin(9600);
  
  
  Serial.println("* SACOLAO DO EDU *");
  Serial.println();
  
  
  
  Serial.println(" Vamos cadastrar as frutas!");
  
  Serial.println();
  
  for(int i = 0; i <= 5; i++){
  Serial.println("Informe a "+ String(i + 1)+ "a Fruta:");
  while (! Serial.available());
  String fruta = Serial.readString();
    
    Serial.println("Qual o preco de "+ frutas[1]+ "a Fruta:");
  while (! Serial.available());
 float precoDigitado = Serial.parseFloat();
  
  frutas[i] = frutaDigitada;
    precosFrutas[i] = precoDigitado;
    
    
  }
  Serial.println("Exibindo os valores cadastrados");
  Serial.println();
  
    for(int i = 0; i <= 5; i++)
  {
    
  Serial.println("1a Fruta : "+ String(precosFrutas[0]));
  Serial.println("Preco da 1a Fruta : "+ String(precosFrutas[0]));
  }
} 

  void loop(){
  } 

