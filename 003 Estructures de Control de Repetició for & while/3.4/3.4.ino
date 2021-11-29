/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 100;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)  //Si tempAigua és més gran de 100 entra al IF  //Si tempAigua és mes gran de 100 entrarà al IF
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  else if(tempAigua==100) {  //Si tempAigua és igual a 100 entrarà a aquest ELSE IF
    Serial.print("Aigua a 100ºC");
  }
  else if(tempAigua>=90) {  //Si tempAigua es més gran o igual a 90 entrarà a aquest ELSE IF però si és més gran de 100 i no és 100 entrarà al IF perquè el programa llegeix de dalt a baix i entrarà a la primera condició que es compleixi
    Serial.print("Aigua a punt de bullir");
  }
  else {  //Si tempAigua NO és més gran o igual que 90 directament entra al ELSE
    Serial.print("Aigua encara no bull");
  }

}
//********** Loop *****************************************************************
void loop() { // we need this to be here even though its empty

}

//********** Funcions *************************************************************
