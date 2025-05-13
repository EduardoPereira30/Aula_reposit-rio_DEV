// C++ code
//

//Variavel
float resultado;

float soma = 0;
float subtracao = 0;
float divicao = 0;
float multiplicacao = 0;
int   escolhaDaOperacao = 0;
int   contador = 0;

float somar (float numero1,float numero2,float numero3 = 5){
  return    (numero1 + numero2 + numero3);
}

void setup()
{
  Serial.begin(9600);
    float numero1 = 0;
    float numero2 = 0;

  do{
    
    Serial.println("           BEM VINDO!             ");
    Serial.println("|--------------------------------|");
    Serial.println("|escolha uma das opcoes/operacoes|");
    Serial.println("|         1 - Soma               |");
    Serial.println("|         2 - Subtrair           |");
    Serial.println("|         3 - Mutiplicar         |");
    Serial.println("|         4 - Dividir            |");
    Serial.println("|--------------------------------|");

    while (!Serial.available()){}//espera o usuario digitar

    escolhaDaOperacao = Serial.parseInt();

    Serial.println("Agora, digite o primiro numero");
    while (!Serial.available());
    numero1 = Serial.parseFloat();
    Serial.println("Agora, digite o segundo numero");
    while (!Serial.available());  
    numero2 = Serial.parseFloat();

    switch (escolhaDaOperacao){
      case 1: 

      resultado = somar(numero1, numero2);
      Serial.println("|-------------------------------------------------|");
      Serial.println("|Resutado da soma eh: " + String (resultado)+ "                        |");
      Serial.println("|-------------------------------------------------|");
      break;
      case 2:  
      subtracao     = numero1 - numero2;
      Serial.println("|-------------------------------------------------|");
      Serial.println("|Resutado da subtracao eh: " + String (subtracao)  + "                   |" );
      Serial.println("|-------------------------------------------------|");

      break;

      case 3: 
      multiplicacao = numero1 * numero2;
      Serial.println("|-------------------------------------------------|");
      Serial.println("|Resutado da subtracao eh: " + String (multiplicacao) + "                   |" );
      Serial.println("|-------------------------------------------------|");

      break;

      case 4:

      divicao = numero1 / numero2;
      Serial.println("|-------------------------------------------------|");
      Serial.println("|Resutado da divicao eh: " + String (divicao)+ "                     |" );
      Serial.println("|-------------------------------------------------|");
      break;

    }

    Serial.println("|-------------------------------------------------|");
    Serial.println("|Se deseija continuar digite (s), se nao digite(n)|");
    Serial.println("|-------------------------------------------------|");
    while (!Serial.available()){}

    if (Serial.readString() == "s"){
      contador++;
    }
    else{
      contador = 0;
      Serial.println("|-----------------------------------------|");
      Serial.println("|Ate mais, obrigado por usar a calculadora|");
      Serial.println("|     caso queira voltar, reinicie        |");
      Serial.println("|-----------------------------------------|");

    }
  }
  while( contador != 0 );

}

void loop()
{

}