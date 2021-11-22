/**********************************************************
**                                                       **
**                    TÍTOL:                             **
**                   PLANTILA                            **
**                                                       **
** ARNAU PUIGGROS                    DATA:19/11/2022     **
***********************************************************/
//******* INCLUDE ************


//******* VARIABLES *********


//******* SETUP ***********

void setup() {
  Serial.begin(9600); // put your setup code here, to run once:
  Serial.println("Escull el numero de l'operacio que vols realitzar?"); //com que nomoes volem que s'executi una vegada ho posem tot dins el setup
  Serial.println("  1.  Comprovar numero de tarjeta de credit");
  Serial.println("  2.  Comprovar numero de compte bancari");
  Serial.println("  3.  Buscar un digit perdut de tarjeta de credit");

}

//******** LOOP ***********

void loop() {
  // put your main code here, to run repeatedly:

}

//******* FUNCIONS **********
