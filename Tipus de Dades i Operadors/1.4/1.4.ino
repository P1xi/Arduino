/**********************************************************************************
**                                                                               **
**                             Math Is Fun                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int a = 5, b = 10, c = 20;  //Inicia les variables amb els seus valors

//********** Setup ****************************************************************
void setup()              
{
  Serial.begin(9600);     

  Serial.println("Here is some math: ");

  Serial.print("a = ");           // mostra per pantalla a =
  Serial.println(a);              // concatena darrera de a = el valor de a (5)
  Serial.print("b = ");           // mostra per pantalla b =
  Serial.println(b);              // concatena darrera de b = el valor de b (10)
  Serial.print("c = ");           // mostra per pantalla c =
  Serial.println(c);              // concatena darrera de c = el valor de c (10)

  Serial.print("a + b = ");       // mostra per pantalla a + b =
  Serial.println(a + b);          // concatena darrera de a + b = el resultat de la operacio a+b (15)

  Serial.print("a * c = ");       // mostra per pantalla a * c =
  Serial.println(a * c);          // concatena darrera de a * c = el resultat de la operacio a*c (100)
  
  Serial.print("c / b = ");       // mostra per pantalla c / b =
  Serial.println(c / b);          // concatena darrera de c / b = el resultat de la operacio c/b (2)

  Serial.print("c % b = ");       // mostra per pantalla c % b =
  Serial.println(c % b);          // concatena darrera de c & b = el resultat de la operacio c%b (0) la operacio % dona el residu d'una divisio
  
  Serial.print("b - c = ");       // mostra per pantalla c - b =
  Serial.println(b - c);          // concatena darrera de c - b = el resultat de la operacio c-b (-10)
}

//********** Loop *****************************************************************
void loop()  
{
}

//********** Funcions *************************************************************
