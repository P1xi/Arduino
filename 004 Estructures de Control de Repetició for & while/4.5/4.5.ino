/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int taula = 2;

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  for (int i=2; i <=10; i++)  //Mentre el valor de i sigui mes petit o igual al valor de taula executara el codi
  {
    Serial.print("Taula de multiplicar del ");  //Mostra per pantalla "Taula de multiplicar del "
    Serial.println(taula);  //Cocatena darrera de "Taula de multiplicar del " el valor de "taula" i fa un enter
    for (int i=0; i <= 10; i++)  //Inicialtiza la variable i a 0, mentre i sigui mes petiti o igual a 10 executarà el codi de dins del FOR. Finalment incrementa la i en 1
    {
      delay(100);  //Fa un delay de 100ms
      Serial.print(taula);  //Mostra per pantalla "taula"
      Serial.print(" x ");  //Concatena " x " darrera del valor de "taula"
      Serial.print(i);  //Concatena el valor de i. El valor de i anira canviant des de 0 fins a 10
      Serial.print( " = ");  //Concatena " = "
      Serial.println(taula*i);    //Concatena el resultat de la operacio taula*i
    }  //El resultat final és que mostra la taula del valor que sigui la variable "taula" per ordre i amb tota l'esctructua -> x * y = z
    taula+=1;  //Incrementa en 1 el valor de taula
  }
}
//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
