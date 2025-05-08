//Faça um programa que receba o nome, cargo, e salário de um funcionário. Calcule o
//salário a ser acrescido de 10%. Ao final exiba o nome, o cargo e o novo salário desse
//funcionário.

//Variáveis
String nome = "";
String cargo = "";
float salario = 0;
float salarioAcrescido = 0;

void setup()
{
  Serial.begin (9600);
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
  Serial.println("Digite seu nome");//pergunta o nome do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  nome = Serial.readString();//resposta do usuário / ler um texto da serial
  nome.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu cargo");//pergunta o cargo do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  cargo = Serial.readString();//resposta do usuário / ler um texto da serial
  cargo.trim();//retira  o \n (retira o enter capturado)
  
  Serial.println("Digite seu salario");//pergunta o salário do usuário
  while(! Serial.available() );//espera o usuário digitar/dar um <Enter>
  salario = Serial.parseFloat();//resposta do usuário
  
  //processamento
  salarioAcrescido = salario + (salario * 0.10);
  
  //saída - formatada
  
   Serial.println();
   Serial.println();
  
   Serial.println("Relatorio");
   Serial.println();
   Serial.println("|------------------------------|");
   Serial.println();
   Serial.println("nome: " + nome );
   Serial.println("cargo:" + cargo);
   Serial.println("salario antigo: R$ " + String (salario));
   Serial.println("Salario atualizado: R$ " + String(salarioAcrescido));
   Serial.println();
  
   Serial.println("|------------------------------|");
  
   Serial.println("Digite uma letra + <Enter> para continuar");
   while (!Serial.available());
  
   Serial.println();
   Serial.println();
  
   Serial.read();//Limpa o cache do /n - o <Enter>
   
}