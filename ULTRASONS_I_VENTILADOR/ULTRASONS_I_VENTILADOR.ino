/**********************************************************
**                                                       **
**                    TÍTOL:                             **
**                   PLANTILA                            **
**                                                       **
** ARNAU PUIGGROS                    DATA:19/11/2022     **
***********************************************************/
//******* INCLUDE ************


//******* VARIABLES *********
int TRIG = 10;
int ECO = 9;
int pinVentilador = 3;
int DURACIO;
int DISTANCIA;

//******* SETUP ***********

void setup() {
  pinMode(TRIG, OUTPUT);
  pinMode(ECO, INPUT);
  pinMode(pinVentilador, OUTPUT);
  Serial.begin(9600); //activa el cami de dades des de larduino a lordinador
}

//******** LOOP ***********

void loop() {
  digitalWrite(TRIG, HIGH);
  delay(1);
  digitalWrite(TRIG, LOW);
  DURACIO = pulseIn(ECO, HIGH); //pulseIn espera rebre un valor per un pin. En aquest cas es el pin ECO i espera rebre un valor ALT.
  DISTANCIA = DURACIO/58.2;
  Serial.println(DISTANCIA); //fa que a la pantalla es printi una linia amb un valor concret.
  delay(200);
  if(DISTANCIA <= 70 && DISTANCIA >= 0){
    digitalWrite(pinVentilador, HIGH);
  }
  else
  {
    digitalWrite(pinVentilador, LOW);
  }
}

//******* FUNCIONS **********
