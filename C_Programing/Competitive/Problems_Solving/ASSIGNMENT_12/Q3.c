//WAP which accept  from user and count frequency  2 in it 
#include<stdio.h>

  
int CountTwo(int iNo)
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
  
    if(iDigit==2)
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


 iRet =CountTwo(iValue);
  
 printf("%d",iRet);

    return 0;
}
