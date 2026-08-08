//4
//1+2+3+4=10


typedef unsigned int ULONG;
#include<stdio.h>

ULONG Factorial(int iNo)
{
   ULONG  iMult=1;
     

     
     while(iNo!=0)
     {
          iMult=iMult*iNo;
          iNo--;
     }
     return iMult;
}



int main()
{
 
     int iValue=0;

     printf("Enter Frequency :  ");
     scanf("%d",&iValue);
 
      ULONG iRet=Factorial(iValue);

      printf("Factorial is  :%lu\n",iRet);
 
 return 0;
}