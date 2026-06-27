#include<stdio.h>


typedef unsigned int UNIT;

//pos 4 is off when it is on 
UNIT OFFbit(UNIT iNo,UNIT iPos)
{
   UNIT iMask=0x1;//hex
   UNIT iResult=0;

  
    if(iPos<1 || iPos>32)
      {
          printf("Invalid Bit Position :\n" );
          return iNo;
      }
   
      iMask = iMask << (iPos-1);
      iMask=  ~ iMask;
      iResult = iNo & iMask;// ^ for toggele 

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

  iRet=OFFbit(iValue,iLocation);

  printf("Updated No is : %d\n ",iRet);
    
    return 0;
}