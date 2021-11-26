/**********************************************************************************
**                                                                               **
**                              Math Is Fun                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
int drive_mb = 0;

//********** Setup ****************************************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Your HD is ");  //mostra per pantalla "Your HD is "
  Serial.print(drive_gb);  //Concatena el valor de drive_gb (5)
  Serial.println(" GB large.");  //Concatena " GB large." i fa un enter

  drive_mb = 1024 * drive_gb;  //calcula quants MB son X GB, en el nostre cas 5GB son 5120MB

  Serial.print("It can store ");  //Mostra per pantalla "It can store "
  Serial.print(drive_mb);  //Concatena el valor de drive_mb (5120)
  Serial.println(" Megabytes!");  //Concatena " Megabytes!" i fa un enter
}

//********** Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
