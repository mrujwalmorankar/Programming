//4
//1+2+3+4=10



#include<stdio.h>

int Factorial(int iNo)
{
     int iMult=1;
     

     
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
 
      
      int iRet=Factorial(iValue);

      printf("Factorial is  :%d\n",iRet);
 
 return 0;
}