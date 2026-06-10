//Write A programe which acept no from user and display its multiplicattion of factors

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=1;


  for(iCnt=1;iCnt<=iNo;iCnt++)//Factorial logic for चं काम म्हणजे 1 ते iNo पर्यंतच्या सर्व संख्यांची तपासणी करणे.
  {
    if(iNo % iCnt==0) //% म्हणजे modulus operator (भागाकार केल्यावर उरलेली बाकी).
                      //जर बाकी 0 आली तर iCnt हा iNo चा factor आहे.
    {
        iMult=iMult *iCnt;


    }
    

  }
  return iMult;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet=MultFact(iValue);

    printf("%d",iRet);
    MultFact(iValue);

    return 0;

}