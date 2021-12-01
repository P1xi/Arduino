/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int sensorReading = 0;  //És el selector, depenent del valor que prengui, el switch entrarà a un case o a un altre.
//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
  Serial.print("The day is "); //Mostra per pantalla: The day is
   
  switch (sensorReading) {
  case 0:    
    Serial.println("dark");  // Si sensorReading=0 concatena "dark" darrera de "The day is "
    break;
  case 1:    
    Serial.println("dim");  // Si sensorReading=1 concatena "dim" darrera de "The day is "
    break;
  case 2:    
    Serial.println("medium");  // Si sensorReading=2 concatena "medium" darrera de "The day is "
    break;
  case 3:
    Serial.println("bright");  // Si sensorReading=3 concatena "bright" darrera de "The day is "
    break;
  default:                     //En cas que sensorReading tingui un valor diferent a 0,1,2,3. Entra al default
    Serial.println("... I don't know!!!");  //Concatena ... I don't know!!!
  } 
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
