/**********************************************************************************
**                                                                               **
**                             Repte.5NumberComunication ex 4                    **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

// ********** Incluye *************************************************************

// ********** variables ***********************************************************
int r ;
int numero ;          
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);
 Serial.println("Entra un número");
}

//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available() > 0) 
    numero = Serial.parseInt();
   
    
    if (Serial.read() == '\n') { // quan pitjem enter li diem que hem acacat d'introduir les hores
    
    if ("numero" <38) //es per quan treballa menys de 48h
    { r = (numero*20)-((numero*20)*0.05); // si cobra menys de 800 li apliquem el sou
    Serial.print( "El salari per "); //escriurem "El salari per"
    Serial.print(numero);
    Serial.print ("hores es de ");
    Serial.print (r);
    Serial.println ("euros");
    }
    
   
   
    {
    else { //si es menys de 800
    r = r-(r*0.05); //li posem un impost de 5
    Serial.print( "El salari per ");
    Serial.print(numero);
    Serial.print ("hores es de ");
    Serial.print (r);
    Serial.println ("euros");
    }
    
    Serial.println("Entra nous valors per al numero");
    
        
    }
  }

}
//********** Funcions *************************************************************
