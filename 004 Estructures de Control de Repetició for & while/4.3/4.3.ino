/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num = 10;  //Inicialitzem la variable num

//********** Setup ****************************************************************
void setup()      // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.println("Ara faré el compte enrere per l'explosió:");
  for (int i=0; i <= 10; i++)  //Inicialitza la variable "int" a 0, mentre i sigui més petit o = a 10 executarà el codi de dins el FOR. Finalment incrementa en 1 la variable i
  {
    delay(1000);  // Fa un delay de 1"
    Serial.println(num);  //Mostra per pantalla el valor de "num"
    num = num - 1;  //Resta 1 al valor de num
  }
  Serial.println(" B  O  O  O  M !!! "); //Només arriba a aquí quan el valor de i==10 i quan i==10 el valor de num==0. Per tant, quan el comptador arriba a 0, la bomba EXPLOTA!!!!
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}

//********** Funcions *************************************************************
