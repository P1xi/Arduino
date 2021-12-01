/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int sensorReading = 0;

//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);
}

//********** Loop *****************************************************************
void loop()  
{
 
  if (sensorReading<=4)
  {
    
    Serial.print("The day is "); 
    switch (sensorReading)
    {
      case 0:    
        Serial.println("dark");
        break;
      case 1:    
        Serial.println("dim");
        break;
      case 2:    
        Serial.println("medium");
        break;
      case 3:
        Serial.println("bright");
        break;
      default:
        Serial.println("... I don't know!!!");
        break;
    }
    sensorReading+=1;
    delay(2000);
  } 
}

//********** Funcions *************************************************************
