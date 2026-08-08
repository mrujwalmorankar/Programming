

#include<stdio.h>

int  Multiplication(int iNo)
{
    int iDigit = 0;
   static int iMult=1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
         iMult=iMult*iDigit;

        Multiplication(iNo/10);



    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter Number :  ");
    scanf("%d", &iValue);

    

    
 iRet=Multiplication(iValue);

 printf("Multiplication of Digit is : %d\n",iRet);
    
    return 0;
}