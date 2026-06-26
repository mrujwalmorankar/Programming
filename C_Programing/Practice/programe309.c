#include<stdio.h>

int main()
{
  unsigned int iNo=0;
  unsigned int iMask=4;
  unsigned int iAns=0;

  printf("Enter  no :\n");
  scanf("%d",&iNo);

  iAns=iNo & iMask;

  if(iAns==iMask)
  {
    printf("3'rd bit is ON");
  }
  else
  {
    printf("3'rd bit is OFF");
  }
   
  
  return 0;
}