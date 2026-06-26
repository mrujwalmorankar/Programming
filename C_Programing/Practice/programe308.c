#include<stdio.h>

int main()
{
  int iNo=0;
  int iMask=4;
  int iAns=0;

  printf("Enter  no :\n");
  scanf("%d",&iNo);

  iAns=iNo & iMask;

  if(iAns==iMask)
  {
    printf("3'rd bit is ON");
  }
  else
  {
    printf("3'rd sbit is OFF");
  }
   
  
  return 0;
}