/**********************************************************************************
**                                                                               **
**                              Math Is Fun                                      **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int drive_gb = 100;
long drive_mb;
long drive_kb;
long real_drive_mb;
long real_drive_kb;
long missing_kb;

//********** Setup ****************************************************************
void setup()             // run once, when the sketch starts
{
  Serial.begin(9600);    // set up Serial library at 9600 bps
  
  Serial.print("Your HD is ");  //Indica total gb
  Serial.print(drive_gb);
  Serial.println(" GB large.");

  drive_mb = 1024.0 * drive_gb;  //Calcul MB

  Serial.print("In theory, it can store ");  // Indica MB
  Serial.print(drive_mb);
  Serial.print(" Megabytes, ");
  drive_kb = drive_mb * 1024;  //Calcul KB
  Serial.print(drive_kb);  //Indica KB
  Serial.println(" Kilobytes.");
  
  real_drive_mb = drive_gb * 1000.0;  //Calcul MB reals
  real_drive_kb = drive_gb * 1000000.0;  //Calcul KB reals
  Serial.print("But it really only stores ");  
  Serial.print(real_drive_mb);  //Indica MB reals
  Serial.print(" Megabytes, ");
  Serial.print(real_drive_kb);  //Indica KB reals
  Serial.println(" Kilobytes.");
  
  Serial.print("You are missing ");
  missing_kb = drive_kb - real_drive_kb;  //Calcul KB perduts
  Serial.print(missing_kb);  //Indica KB perduts
  Serial.println(" Kilobytes!!!");
  
}

//********** Loop *****************************************************************
void loop()     // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
