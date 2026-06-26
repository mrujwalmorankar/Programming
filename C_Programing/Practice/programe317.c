#include<stdio.h>


typedef unsigned int UNIT;//type define UserDefine Datatype Defined
int main()
{
  UNIT iNo=0;
  UNIT iMask=0x1;
  UNIT iAns=0;
  UNIT iPos=0;
  

  printf("Enter  no :\n");
  scanf("%d",&iNo);

  printf("Enter  the position :\n");
  scanf("%d",&iPos);


  iMask=iMask<<(iPos-1);
  iAns=iNo & iMask;

  if(iAns==iMask)
  {
    printf(" Bit is ON");
  }
  else
  {
    printf(" Bit is OFF");
  }
   
  
  return 0;
}