#include<stdio.h>


typedef unsigned int UNIT;//type define UserDefine Datatype Defined
int main()
{
  UNIT iNo=0;
  UNIT iMask=4;
  UNIT iAns=0;

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