//Write A programe to find odd factorial of given number


#include<stdio.h>


     int OddFactorial(int iNo)
{
int iFact=1;
int iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

 for(iCnt = 1; iCnt <= iNo; iCnt++)//Factorial logic 
    {
        if(iCnt % 2 != 0)//Factorial odd logic 
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}


int main()
{
    int iValue = 0,iRet=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

 iRet= OddFactorial(iValue);
 printf("Even  Factorial of number is : %d ",iRet);

    return 0;
}
