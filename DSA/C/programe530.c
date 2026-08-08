// 4!
// 4*3*2*1 = 24

typedef unsigned int ULONG;

#include<stdio.h>

ULONG Factorial(int iNo)
{
    ULONG iMult = 1;

    if(iNo != 0)
    {
        iMult = iMult * iNo;

        iNo--;

        iMult = iMult * iNo;

        Factorial(iNo);
    }

    return iMult;
}



int main()
{
    int iValue = 0;

    printf("Enter Number :  ");
    scanf("%d", &iValue);


    

    return 0;
}