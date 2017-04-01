/**********************************************************************************
**                                                                               **
**                             Repte4.ControlStructures ex 5                     **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************
// ********** variables ***********************************************************
int sensorReading = 2;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("The day is "); 
   
  switch (sensorReading) { // a partir del resultat llegeix 3 opcions
  case 0:    
    Serial.println("dark"); //opcio numero 1
    break;
  case 1:    
    Serial.println("dim"); //opcio numero 2
    break;
  case 2:    
    Serial.println("medium"); // opcio numero 3
    break;
  case 3:
    Serial.println("bright"); //opcio numero 4
    break;
  default:
    Serial.println(" I don't know!!!"); //alternativa
    }

}
//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
//********** Funcions *************************************************************
