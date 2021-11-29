/**********************************************************
**                                                       **
**                    TÍTOL:                             **
**                   PLANTILA                            **
**                                                       **
** ARNAU PUIGGROS                    DATA:19/11/2022     **
***********************************************************/
//******* INCLUDE ************


//******* VARIABLES *********
int T  =  9;
int Y  =  4;
int K  =  8;
int N  =  3;
int P  = - 3;
boolean Z  = true;
boolean W = false;
boolean A  =  false;
boolean B  =  true;


//******* SETUP ***********

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println(T > 10 && T < 14);
  Serial.println(Y > 4 || Y < 7);
  Serial.println(K > 8 && K < 10);
  Serial.println(N > 2 || N < 20);
  Serial.println(P > 0 && P < -3);
  Serial.println(T > 10 || Z);
  Serial.println(P > 0 && B);
  Serial.println(W && B);
  Serial.println(W && A);

}

//******** LOOP ***********

void loop() {
  // put your main code here, to run repeatedly:

}

//******* FUNCIONS **********
