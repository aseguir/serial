/**********************************************************************************
**                                                                               **
**                             Print ex 1                                        **
**                                                                               **
**   albert segui                                27/021/7                        **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
int num = 64;

//********** Setup ****************************************************************
void setup() {
    Serial.begin(9600);
      Serial.println("Different formats for the same number:");

     Serial.write(num);//ens escriu el numero
  Serial.println();//fa que ens ho escrigui en vertical
  
  Serial.println(num);
  Serial.println(num,DEC);//ens passa el numero a decimal
  
  Serial.println(num,BIN);//ens ho escriu en binari
  
  Serial.println(num,HEX);//ens ho escriu a hexadecimal
  
  Serial.println(num,OCT);//ens ho escriu octal


}

void loop() {
  // put your main code here, to run repeatedly:

}
