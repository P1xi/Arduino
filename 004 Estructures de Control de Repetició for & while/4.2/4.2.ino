/**********************************************************
**                                                       **
**                    TÍTOL:                             **
**                   PLANTILA                            **
**                                                       **
** ARNAU PUIGGROS                    DATA:19/11/2022     **
***********************************************************/
//******* INCLUDE ************


//******* VARIABLES *********
int comptar = 11;  //Inicialitzem la variable "comptar"


//******* SETUP ***********
void setup()                // run once, when the sketch starts
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");  //Mostra per pantalla "Ara comptare de 0 a "
  Serial.println(comptar);  //Concatena el valor de la variable "comptar" darrera de "Ara comptare de 0 a "
  for (int i=0; i <= comptar; i++)  //Inicialitza la vriable i a 0, mentre el valor de i sigui mes petit o = a comptar executara el codi de dins el for. Finalment un cop executat el codi de dins el for fara i+1
  {
    if (i<comptar){  //Quan i el valor de i és més petit que el valor de comptar executarà el codi de dins de l'if
      Serial.print(i);  //Mostra per pantalla el valor de i (sense fer enter)
      Serial.print("-");  //Concatena "-" darrera del valor de i
    }
    else{  //Si el valor de i és igual o més gran que el valor de concatena només mostrarà el valor de i per pantalla
      Serial.print(i);
    }
    
  } 
}
void loop()     // we need this to be here even though its empty
{
}
