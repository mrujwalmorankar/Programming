#include<stdio.h>

//pos 3 nd 8 
typedef unsigned int UNIT;

int main()
{
  UNIT iMask1=0x4;
  UNIT iMask2=0x80;
  UNIT iMask=0;
  UNIT iNo=0;
  UNIT iResult=0;

  printf("Enter No:\n");
  scanf("%d",&iNo);

  iMask=iMask1 | iMask2;

  iResult= iNo ^ iMask;
  
   printf("Updated No: %d\n",iResult);

    return 0;
}