


/*cria um vetortamanho 4 */

int qntCadastro = 4;
String        convidados[4];
String    emailCovidados[4];
int      idadeConvidados[4];

// Funções
void desenhaCabecario(){
  Serial.println("   * * * * * BOM DIA * * * * *   ");
  Serial.println("|-------------------------------|");
  Serial.println("|  Voce foi convidado pra um    |");
  Serial.println("|           churasco!           |");
  Serial.println("|-------------------------------|");
  Serial.println("");
  Serial.println("|-------------------------------|"); 
  Serial.println("|     Preencha as informacoes:  |");
  Serial.println("|-------------------------------|");
  Serial.println("");
}


void setup()
{
  Serial.begin(9600);
}// fim setup

void loop()
{
  desenhaCabecario();// chama a função pra desenhar o cabeçario

  //cadastrar os dados
  for (int i = 0; i < qntCadastro; i++){
    Serial.println("informe " + String(i + 1) + "o nome para cadastro");
    while (!Serial.available());
    convidados[i] = Serial.readString();

    Serial.println("por favor, Digite a idade de: " + convidados[i]);
    while (!Serial.available());
    idadeConvidados[i] = Serial.parseInt();

    Serial.println("por favor, Digite o email de : " + convidados[i]);
    while (!Serial.available());
    emailCovidados[i] = Serial.readString();

  }// fim do for
  Serial.println("|---------------------------------|");
  Serial.println("| Exibindo convidados confirmados |");
  Serial.println("|---------------------------------|");

  for ( int i = 0; i < qntCadastro; i++){
    if( idadeConvidados[i] >= 18){
      Serial.println("|-----------------------------------|");
      Serial.println("  Nome:" + convidados[i]);  
      Serial.println("  Idade:" + String(idadeConvidados[i])); 
      Serial.println("  Email:" + emailCovidados[i]);
      Serial.println("  Permissao para a festa :" + String(idadeConvidados[i] >= 18 ? "ok" : "menor de idade"));
      Serial.println("|-----------------------------------|");
    }
  }

  delay (2000);
}// fim loop