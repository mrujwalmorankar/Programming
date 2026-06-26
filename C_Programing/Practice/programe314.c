#include<stdio.h>


typedef unsigned int UNIT;//type define UserDefine Datatype Defined
int main()
{
  UNIT iNo=0;
  UNIT iMask=0x10000;
  UNIT iAns=0;

  printf("Enter  no :\n");
  scanf("%d",&iNo);

  iAns=iNo & iMask;

  if(iAns==iMask)
  {
    printf("17'th bit is ON");
  }
  else
  {
    printf("17'th bit is OFF");
  }
   
  
  return 0;
}