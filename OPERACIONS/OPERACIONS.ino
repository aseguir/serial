/**********************************************************************************
**                                                                               **
**                     OPERACIONS                                                **
**                                                                               **
**   Albert Seguí Rotllant                                 Data:06/02/2017       **
**********************************************************************************/

//***************************Includes********************************************

//***************************Variables*******************************************
int a = 5;//primer de tot li tenim de posar les variables
int b = 10;
int c = 20;
//****************************Setup**********************************************

void setup() {
   Serial.begin(9600);     // set up Serial library at 9600 bps
Serial.println(b + a);//aqui li dic qu sumi a + b
Serial.println(a * c);//en aquesta operacio vull que em multipliqui a*c
Serial.println(a - b);//en aquesta operacio em resta a - b
Serial.println(b % a);//En aquesta operacio li dic que em digui el residu de la divisio
Serial.println("b - c = ");//En aquesta operacio em calcula la resta de b-c
Serial.println(c / a);//En aquesta operacio em fa la divisio de c/a
}

void loop() {



}
