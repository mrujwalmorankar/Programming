#include<stdio.h>

//pos 9 nd 17 
typedef unsigned int UNIT;

int main()
{
  UNIT iMask=0x10100;
  UNIT iNo=0;
  UNIT iResult=0;

  printf("Enter No:\n");
  scanf("%d",&iNo);

  iResult= iNo ^ iMask;
  
   printf("Updated No: %d\n",iResult);

    return 0;
}