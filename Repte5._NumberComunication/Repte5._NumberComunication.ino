/**********************************************************************************
**                                                                               **
**                             Repte5. NumberComunication                        **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ***********************************************************
float r1, r2;             
float rSerie, rParalel;   

//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);        // initialize serial
  Serial.println("Entra el valor de r1 i r2 (separats per una coma)");
}
//********** Loop *****************************************************************
void loop() {
  while (Serial.available() > 0) { 
    r1 = Serial.parseInt();
    
    r2 = Serial.parseInt();
    
    if (Serial.read() == '\n') { //quan polsem el boto enter li estem dien que hem acavat d'introduir les dades.
    
    Serial.print (" R1=  "); //ens escreiura els seguents missatges que estan entre cometes.
    Serial.print (r1);
    Serial.print ("ohms");
    Serial.print (" R2= ");
    Serial.print (r2);
    Serial.println ("ohms");

    rSerie = r1 + r2 ; // es l'operacio que te de fer per calcula la resistencia en serie
    rParalel = r1*r2 / (r1+r2) ; //es l'operacio que te de fer per calcular la resistencia en paralel

    Serial.print (" Rserie = ");
    Serial.print (rSerie); //ens escriura el resultat de l'operacio
    Serial.print ("ohms");
    Serial.print (" rparalel = ");
    Serial.print (rParalel);
    Serial.println ("ohms");
    Serial.println ("Entra nous valors per a r1 i r2 ");
     
    }
  }
}
//********** Funcions *************************************************************
