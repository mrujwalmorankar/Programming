#include<stdio.h>


typedef unsigned int UNIT;


UNIT Togglebit(UNIT iNo,UNIT iPos)
{
   UNIT iMask=0x1;//hex
   UNIT iResult=0;

  
    if(iPos<1||iPos>32)
      {
          printf("Invalid Bit Position :\n" );
          return iNo;
      }
   
      iMask = iMask << (iPos-1);
      iResult = iNo ^ iMask;// ^ for toggele 

return iResult;
}



int main()
{
  UNIT iMask=0x1;
  UNIT iValue=0;
  UNIT iLocation=0;
  UNIT  iRet=0;

  printf("Enter Number :\n ");
  scanf("%d",&iValue);

  printf("Enter Bit Position :\n ");
  scanf("%d",&iLocation);

  iRet=Togglebit(iValue,iLocation);

  printf("Updated No is : %d\n ",iRet);
    
    return 0;
}