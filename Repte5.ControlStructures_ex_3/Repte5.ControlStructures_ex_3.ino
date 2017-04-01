/**********************************************************************************
**                                                                               **
**                             Repte5.ControlStructures ex 3                     **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ***********************************************************
int numero;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);     // Configura una biblioteca a 9600 bpm
  Serial.println ("Entra un numero");   // Escriu  (Entra un numero)

}
//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:
 while (Serial.available() > 0) {      
    numero = Serial.parseFloat(); 
    Serial.print ("El numero ");     //ens escriu "el numero"  
    Serial.print (numero);                   
    if (numero / 10 == 0)   // del 0 al 10 significa que el nomre tindra una xifra      
      {
      Serial.println (" te 1 xifra");  // ecriu que te una xifre
      }     
    else if (numero / 100 == 0) // fins el 100 podra tenir 2 xifres 
      {   
      Serial.println (" te 2 xifres");  
      }
    else if (numero / 1000 == 0) //fins el 100 podra tenir 3 xifres
      {
      Serial.println (" te 3 xifres");  
      }
    else if (numero / 10000 == 0)   // fins el 10000 podra tenir 4 xifres
      {
      Serial.println (" te 4 xifres");  
      }
    else if (numero / 100000 == 0)  //fins el 1000000 tindra 5 xifres
      {
      Serial.println (" te 5 xifres");   
      }
  
      
    if (Serial.read() == '\n')
    Serial.println (" ");                    
    Serial.println ("Entra un altre numero");//finalment ens escriura que introduim un altre numero   
                      
  }
}
//********** Funcions *************************************************************
