/**********************************************************************************
**                                                                               **
**                               Caixer automatic                                **
**                                                                               **
**   Nom:Albert Seguí Rotllant                              Data:6/2/16          **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************

//********** Setup ****************************************************************
void setup()
{ Serial.begin(9600);//inicia la comunicacio serie a una velocitat de 9600bps 
Serial.println("Escull el numero de l'operacio que vols realitzar?");
Serial.println("1.Comprovar numero targeta de credit");
Serial.println("2.Comprovar numero de compte bencari");
Serial.println("3.Buscar un digit perdut de la targeta de credit");//
}
    
   //********** Loop *****************************************************************
void loop()
{ 
}

//********** Funcions *************************************************************
