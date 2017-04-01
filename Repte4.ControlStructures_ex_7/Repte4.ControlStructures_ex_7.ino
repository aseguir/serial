/**********************************************************************************
**                                                                               **
**                             Repte4.ControlStructures ex 7                     **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ************************************************************
int comptar = 12;
//********** Setup ****************************************************************
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
 Serial.print("Ara comptare de 0 a "); //escriure el seguent missatge
  Serial.println("comptar"); 
 for ( int i=0; i < comptar; i++ ) //comença a comptar i acavara al numero 11 
 
  {
    Serial.print(i); 
    Serial.print("-");
  }
  Serial.print("comptar"); // acavara l'accio escrivint comptar al final
} 
 

//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
//********** Funcions *************************************************************
