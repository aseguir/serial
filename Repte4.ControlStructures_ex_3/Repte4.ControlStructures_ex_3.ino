/**********************************************************************************
**                                                                               **
**                             Repte4.ControlStructures ex 3                     **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ************************************************************
//assignem variale
int tempAigua = 90;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( tempAigua > 100)
  {
    Serial.print("Aigua bullint"); // ho escriu quan temp aigua supera els 100 graus
  } 
  else if (tempAigua >= 90 & tempAigua < 100)
  {
    Serial.print(" Aigua a punt de bullir"); /ho escriu quan l'aigua esta entra 90 i 100 graus
  }
  else
  {
    Serial.print("aigua encara no bull");// sino passa res de les opcions anteriors ens escriu que l'aigua encara no vull
  }
}
//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
//********** Funcions *************************************************************

