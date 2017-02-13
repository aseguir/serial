/**********************************************************************************
**                                                                               **
**                       PROGRAMA HELLOW WORLD                                   **
**                                                                               **
**   Albert Seguí Rotllant                                                       **
**********************************************************************************/

//***************************Includes********************************************

//***************************Variables*******************************************

//****************************Setup**********************************************
void setup()
{
  Serial.begin(9600);       // es el que comença i amb el que li donem la velocitat de 9600bps entre parentesis
  Serial.println("Hello world!"); // es el que escriu el hellow world
}


//********** Loop *****************************************************************
void loop() //E copiat al void del serial begin i serial println, a continuacio e anat a herramientas-monitor serie, i cada cop que engegava l'arduino surt al monitor hellow world!!
{
}

//********** Funcions *************************************************************
