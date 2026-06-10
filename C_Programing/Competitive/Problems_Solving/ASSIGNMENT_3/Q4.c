//Accept one character from user and convert case of character(ASCII VAlue code)

#include<stdio.h>

void DisplayConvert(char CValue)
{
    
    if((CValue >= 'A') && (CValue <= 'Z'))//Cvalue grater than or eqaual to A and Cvalue is less than or equal to Z
    {
        //For upper case to lower case
        CValue = CValue + 32;//A is 65 + 32=(97[a])
                              //A=65 a=97
        printf("Lower Case Character is : ""%c", CValue);
    }
    //For Lower case to upper case
    else if((CValue >= 'a') && (CValue <= 'z'))//Cvalue grater than or eqaual to a and Cvalue is less than or equal to z
    {
        CValue = CValue - 32; //a is 97- 32=(65[A])
        printf("Upper Case Character is : ""%c", CValue);
    }
}

    int main()
    {
        char CValue='\0';//Default value
         
        printf("Enter Charcter :");
        scanf("%c",&CValue);

      DisplayConvert(CValue);

      return 0;


    }
