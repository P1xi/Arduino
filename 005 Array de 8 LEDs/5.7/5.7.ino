/**********************************************************
**                                                       **
**                    TÍTOL:                             **
**                   PLANTILA                            **
**                                                       **
** ARNAU PUIGGROS                    DATA:19/11/2022     **
***********************************************************/
//******* INCLUDE ************


//******* VARIABLES *********
const byte led0 = 5;
const byte led1 = 6;
const byte buttonPin2 = 2;
const byte buttonPin3 = 3;
byte buttonState2 = 0;
byte buttonState3 = 0;

//******* SETUP ***********

void setup() {
  pinMode(led0, OUTPUT); 
  pinMode(buttonPin2, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(buttonPin3, INPUT);

}
//******** LOOP ***********

void loop() {
  buttonState2 = digitalRead(buttonPin2);
  buttonState3 = digitalRead(buttonPin3); 
  if (buttonState2 == 0)
  {
    int x=30;
    while(x>0)
    {
      digitalWrite(led0, HIGH);
      delay(50);
      digitalWrite(led0, LOW);
      delay(50);
      x-=1;
      buttonState3 = digitalRead(buttonPin3); 
      if (buttonState3 == 0) break;
    }
  }
  else if (buttonState3 == 0)
  {
    for(int x=29; x>0; x--)
    {
      digitalWrite(led1, HIGH);
      delay(50);
      digitalWrite(led1, LOW);
      delay(50);
      buttonState2 = digitalRead(buttonPin2);
      if (buttonState2 == 0) break;
    }
  }

}


//******* FUNCIONS **********
