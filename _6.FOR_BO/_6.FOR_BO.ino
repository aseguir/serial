/**********************************************************************************
**                                                                               **
**                               Plantilla                                       **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int comptar = 11;


//********** Setup ****************************************************************
void setup()
{
  Serial.begin(9600);       // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");//ens escriu "Ara comptare de 0 a 11 en horitzontal
  Serial.println(comptar);
  for (int i=0; i <= comptar; i++)//el for li diem que ens sumi i mes 1 i a continuacio li diem que si es igual o mes petit de 11 
  // ens anira suman 1 i despres ens apuntara el resultat i ens posara un guio
  {
    Serial.print(i);
   
    
      Serial.print("-");
    }
  
}

//********** Loop *****************************************************************
void loop()
{
}

//********** Funcions *************************************************************
