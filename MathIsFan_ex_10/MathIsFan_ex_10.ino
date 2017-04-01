/**********************************************************************************
**                                                                               **
**                             MathIsFan ex 10                                    **
**                                                                               **
**   albert segui                                1/04/17                         **
**********************************************************************************/

//********** Includes *************************************************************


//********** Variables ************************************************************
//assignem les variables
int a = 3;
int b = 2;
float d;
//********** Setup ****************************************************************
void setup() {
  // put your setup code here, to run once:
   Serial.begin(9600);      // set up Serial library at 9600 bps

  Serial.println("Here is division: ");

  Serial.print("a = ");//li diem que escrigui a= a la variable que hem posat
  Serial.println(a);
  Serial.print("b = ");//li diem que escrigui b= a la variable que hem posat
  Serial.println(b);

  d =(float) a / b;//calcula la operacio
 
  Serial.print("a / b = ");
  Serial.println(d);//li diem que ens escrigui el resoltat de l'operacio

}

//********** Loop *****************************************************************
void loop() {
  // put your main code here, to run repeatedly:

}
