//Write A programe to find even factorial of given number


#include<stdio.h>


     int EvenFactorial(int iNo)
{
int iFact=1;
int iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

 for(iCnt = 2; iCnt <= iNo; iCnt++)//Factorial logic 
    {
        if(iCnt % 2 == 0)//Factorial even logic 
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

 iRet= EvenFactorial(iValue);
 printf("Even  Factorial of number is : %d ",iRet);

    return 0;
}
