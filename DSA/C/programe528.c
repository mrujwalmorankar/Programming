//4
//1+2+3+4=10



#include<stdio.h>

unsigned int Factorial(int iNo)
{
   unsigned  long int iMult=1;
     

     
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
 
      
unsigned long int iRet=Factorial(iValue);

      printf("Factorial is  :%lu\n",iRet);
 
 return 0;
}