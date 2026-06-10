//WAP accept amount in Us dollar and return its corresponding value in indian Currency.
//Consider  1$ as 70 rupees


#include<stdio.h>


     int DollarToINR(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

  iNo= iNo*70;//logic for convert $ to INR
  
  return iNo;
}

int main()
{
    int iValue = 0,iRet=0;

    printf("Enter number  oF USD : ");
    scanf("%d",&iValue);

 iRet= DollarToINR(iValue);
 printf("Value of INR is %d :",iRet);

    return 0;
}
