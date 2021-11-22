/*********************************************************************************
**                                                                              **
**                              Hello World                                     **
**                                                                              **
**                                                                              **
*********************************************************************************/

//********* Includes *************************************************************

//********* Variables ************************************************************

//********* Setup ****************************************************************
void setup()                // el setup nomes s'executa una vegada, quan el sketch s'inicia
{
  Serial.begin(9600);       // Executa Serial Begin a 9600 bts
  Serial.println("Hello world!"); // Escriu "Hello World!/n" al serial port
}

//********* Loop *****************************************************************
void loop()   // el void s'executa infinitament
{
           // com que no hi ha codi no farà absolutament res, però ho farà infinitament
}

//********* Funcions *************************************************************
