//WAP which accept  from user and Check whether  it contains 0 in it or not
#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{

  if(iNo<0)
  {
    iNo=-iNo;
  }


  int iDigit=0 ;
 while (iNo!=0)
 {
   iDigit=iNo%10;//Digit remainder check and forward in printf 
  
    if(iDigit==0)
   {
    return true;
   }    
   iNo=iNo/10;//540/54/4/5//Digit Seperate logic 
 }
 return false;
   
}


int main()
{
   
      int iValue=0;
      bool bret=FALSE;
    printf("Enter number  : ");
    scanf("%d",&iValue);


 bret =ChkZero(iValue);
  
 if(bret==true)
 {
  printf("It Contains Zero");
 }
 else
 {
  printf("There is No Zero");
 }

    return 0;
}
