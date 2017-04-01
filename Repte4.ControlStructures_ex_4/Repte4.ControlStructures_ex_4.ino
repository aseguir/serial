/**********************************************************************************
**                                                                               **
**                             Repte4.ControlStructures ex 4                     **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ************************************************************
int kgCO2m2 = 15;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
 if (kgCO2m2 < 3.5 ) //si compleix la seguent condicio

  Serial.print (" Qualificació energètica A "); // ens escriura la frase que esta entre cometes

  else if (kgCO2m2 <6.5)

  Serial.print ( "Qualificació energègtica B");

  else if ( kgCO2m2 <11.1)

  Serial.print("Qualificació energètica C");

   else if ( kgCO2m2 <17.7)

  Serial.print("Qualificació energètica D");

 else if ( kgCO2m2 <38.2)

  Serial.print("Qualificació energètica E");

 else if ( kgCO2m2 <43.2)

  Serial.print("Qualificació energètica F");

   else if ( kgCO2m2 <=43.2)

  Serial.print("Qualificació energètica C");

}
//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
//********** Funcions *************************************************************
