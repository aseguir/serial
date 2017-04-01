/**********************************************************************************
**                                                                               **
**                             Repte4.ControlStructures ex 2                    **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ************************************************************
//li donem la viarable
int tempAigua = 99 ;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); 
  if (tempAigua < 100)
  {
    Serial.print("Aigua encara no bull");//li diem que si la variable es inferior a 100 es escrigui que l'aigua encara no vull
  }
  else
  {
    Serial.print("Aigua bullint");//si la variable es superior a 100 li diem que ens escrigui que l'aigua ja vull
  }
}
//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
