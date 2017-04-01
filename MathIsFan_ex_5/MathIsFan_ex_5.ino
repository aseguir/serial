/**********************************************************************************
**                                                                               **
**                             MathIsFan ex 5                                    **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

//********** Includes *************************************************************


//********** Variables ************************************************************
int drive_gb = 100;//aqui a les variables li dic que passi de int a llarg
long drive_mb;
//********** Setup ****************************************************************
  
void setup() {
  Serial.begin(9600);    

  Serial.print("LA SEVA HD ES ");//li dic que escrigui la seva hd es
  Serial.print(drive_gb);
  Serial.println(" GB gran.");//li dic que escrigui GB gran

  drive_mb = 1024 * drive_gb;//li dic que el drive mb=1024 i que a continuacio els multipliqui per les gb

  Serial.print("Es capaç d'emmagatzemar ");//li dic que escrigui Es capaç d'emmagatzemar
  Serial.print(drive_mb);
  Serial.println(" Megabytes!");//li dic que escrigui els megabytes

}
//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
