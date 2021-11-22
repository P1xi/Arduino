/*********************************************************************************
**                                                                              **
**                         Serial Plotter                                       **
**                                                                              **
**                                                                              **
*********************************************************************************/
//********* Includes *************************************************************
//********* Variables ************************************************************
byte y1 = 0; // inicia la variable y1 a 0
byte y2 = 100; // inicia la variable y2 a 100
byte y3 = 200; // inicia la variable y3 a 200
//********* Setup ****************************************************************
void setup()       
{
  Serial.begin(9600);
}
//********* Loop *****************************************************************
void loop()
{
  Serial.print(y1); //Mostra y1 per pantalla
  Serial.print("\t"); // Concatena un tabulador a y1
  Serial.print(y2); //Concatena y2 a y1 \t
  Serial.print("\t"); // Concatena un tabulador a y1 \t y2
  Serial.println(y3); // Concatena y3 a y1 \t y2

  y1 = y1 + 5;
  y2 = y2 + 2;
  y3 = y3 + 1;

  delay(100);
}
//********* Funcions *************************************************************
