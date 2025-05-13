void setup()
{
  Serial.begin(9600);
}

void loop()
{


  //variavel
  int tabuada = 0;
  int Ntabu;
  Serial.println("Digite o numero da tabuada que quer");
  while(! Serial.available() );
  tabuada = Serial.parseInt();


  for(int contador = 1; contador <= 10;contador++){
    Ntabu = tabuada * contador;
    Serial.println(String(tabuada) + "x" + String(contador) + ":" + String(Ntabu));
    delay(1200);  

  }

}
