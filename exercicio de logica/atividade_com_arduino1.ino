/*  

Crie um menu com Do While que solicite ao usuário qual led ele quer acender ou apagar,
com suas devidas funcionalidades, da seguinte forma:

1) Ligar Led Verde
2) Desligar Led Verde
3) Ligar Led Amarelo
4) Desligar Led Amarelo
5) Ligar Led Vermelho
6) Desligar Led Vermelho
7) Ligar Todos os Leds
8) Desligar Todos os Leds
0) Sair
*/
int ledVerde = 9;
int ledVermelho = 8;
int ledAzul = 7;
int opcaoLed = 10;
void setup()
{

  Serial.begin(9600);
  pinMode(13, OUTPUT);  
}

void loop()
{ 


  do{
    // Cabeçalhio
    Serial.println("*--------------------------------------*");
    Serial.println("| Qual led vc deseja acerde ou apagar? |");
    Serial.println("|                                      |");
    Serial.println("|  digite 1 para Ligar Led Verde       |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 2 para Desligar Led Verde    |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 3 para Ligar Led Vermelho    |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 4 para Desligar Led Vermelho |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 5 para Ligar Led Azul        |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 6 para Desligar Led Azul     |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 7 Ligar Todos os Leds        |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 8 Desligar Todos os Leds     |");
    Serial.println("|--------------------------------------|");
    Serial.println("|  digite 0 Sair                       |");
    Serial.println("*--------------------------------------*");



    while (!Serial.available());
    int opcaoLed = Serial.parseInt();// guardar a escolha do usuario

    switch (opcaoLed){


      case 1:// liga led verde

      digitalWrite(ledVerde, HIGH);
      delay(200); 
      break;

      case 2: // desliga led verde

      digitalWrite(ledVerde, LOW);
      delay(200); 
      break;

      case 3:// liga led vermalho

      digitalWrite (ledVermelho, HIGH);
      delay(200); 
      break;

      case 4:// desliga led vermelho 

      digitalWrite(ledVermelho, LOW);
      delay(200); 
      break;

      case 5:// liga led azul

      digitalWrite(ledAzul, HIGH);
      delay(200); 
      break;

      case 6 :// desliga o led azul

      digitalWrite(ledAzul, LOW);
      delay(200); 
      break;

      case 7:// liga todos os leds

      digitalWrite(ledAzul, HIGH);
      delay(200); 
      digitalWrite(ledVerde, HIGH);
      delay(200); 
      digitalWrite(ledVermelho, HIGH);
      delay(200); 
      break;

      case 8:// desliga todos os leds

      digitalWrite(ledAzul, LOW);
      delay(200); 
      digitalWrite(ledVerde, LOW);
      delay(200); 
      digitalWrite(ledVermelho, LOW);
      delay(200);
      break;

    }
  }while( opcaoLed == 0 );
}