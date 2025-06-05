/*
  Exibir os números pares 60 a 80 e inpares de 81 a 101 no
  mesmo laço while
*/
int contador = 58;
int contadorImp ;
void setup()
{
  Serial.begin(3600);
}

void loop()
{
  while ( contador < 101 ){
    contador += 2;
    Serial.println("contador par : " + String (contador) ); 

    while( contador >= 80 && contador < 101 ){
      contador += 1 ;
      Serial.println("contador impar : " + String (contador) ); 

    }

  }
}