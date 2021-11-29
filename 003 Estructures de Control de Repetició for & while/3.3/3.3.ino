/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 10;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua > 100)  //Si tempAigua és més gran de 100 entra al IF
  {
    Serial.print("Aigua supera els 100C, esta bullint!");
  } 
  else {  //Si tempAigua no és més gran de 100 directament entra al ELSE
    Serial.print("Aigua encara no bull");
  }
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
