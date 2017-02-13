/**********************************************************************************
**                                                                               **
**                       PROGRAMA HELLOW WORLD                                   **
**                                                                               **
**   Albert Seguí Rotllant                                 Data:30/01/2017       **
**********************************************************************************/

//***************************Includes********************************************

//***************************Variables*******************************************
int a = 5;
int b = 10;
int c = 20;
//****************************Setup**********************************************

void setup() {
   Serial.begin(9600);     // set up Serial library at 9600 bps
Serial.println(b + a);
Serial.println(a * c);
Serial.println(a - b);
Serial.println(b % a);
Serial.println("b - c = ");
Serial.println(c / a);
}

void loop() {



}
