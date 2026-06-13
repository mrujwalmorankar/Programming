//WAP which accept  from user and DISPLAY of all digits in reverse order


#include<stdio.h>

void DisplayDigit(int iNo)
{

  if(iNo<0)
  {
    iNo=-iNo;
  }
  int iDigit=0 ;

while (iNo!=0)
{
   iDigit=iNo%10;//Digit remainder check and forward in printf 
   
   printf("%d\n",iDigit);//0/4/5//
   
   iNo=iNo/10;//540/54/4/5//Digit Seperate logic 

    
}
}


int main()
{
   
      int iValue=0;

    printf("Enter number  : ");
    scanf("%d",&iValue);


   DisplayDigit(iValue);
  

    return 0;
}
