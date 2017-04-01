/**********************************************************************************
**                                                                               **
**                             Repte5.NumberComunication ex2                     **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ************************************************************
int n1;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);     
  Serial.println ("Entra un numero");   // ens escriura "entra un numero"
}
//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:
   while (Serial.available() > 0) {      // Llegeix els números del Serial
    n1 = Serial.parseFloat(); 
    Serial.print ("El numero ");         // Escriu a una nova línia (El numero )
    Serial.print (n1);                   // Escriu el valor de "n1"
    if (n1 % 2 == 0)           // Si el mòdul de n1 dividit entre 2 és 0 ...
      {
      Serial.println (" es parell");     // escriura a la pantalla que es parell 
      }
      
    else                       // Si el mòdul no és 0
      {   
      Serial.println (" es senar");             // Escriura a la pantalla que es senar 
      }
      
    if (Serial.read() == '\n')
    Serial.println (" ");                       // Escriu ( )
    Serial.println ("Entra un altre numero"); //ens torna a escriura "entre un altre numero  
                        
  }

}
//********** Funcions *************************************************************
