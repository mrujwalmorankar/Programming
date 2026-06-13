//WAP which accept  from user and count frequency of a such digits which are less than 6 .
#include<stdio.h>

  
int CountFour(int iNo)
{

  if(iNo<0)
  {
    iNo=-iNo;
  }

int iCount=0;
  int iDigit=0 ;
 while (iNo!=0)
 {
   iDigit=iNo%10;//Digit remainder check and forward in printf 
  
    if(iDigit<6)
   {
    iCount++;
   }    
   iNo=iNo/10;//540/54/4/5//Digit Seperate logic 
 }
 return  iCount;
   
}


int main()
{
   
      int iValue=0;
      int iRet=0;
    printf("Enter number  : ");
    scanf("%d",&iValue);


 iRet =CountFour(iValue);
  
 printf("%d",iRet);

    return 0;
}
