//Write A programe which returns diffrence betn Even Factorial And Odd Factorial of a given Number.


#include<stdio.h>


     int EvenFactorial(int iNo)
{
int iOddFact=1;
int iEvenFact=1;
int iCnt=0;
    if(iNo < 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

 for(iCnt = 2; iCnt <= iNo; iCnt++)//Factorial logic 
    {
        if(iCnt % 2 == 0)//Factorial even logic 
        {
            iEvenFact = iEvenFact * iCnt;
        }
        if(iCnt % 2 != 0)//Factorial odd logic 
        {
            iOddFact = iOddFact * iCnt;
        }

    }
    return iEvenFact-iOddFact;//Difference logic
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
