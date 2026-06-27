#include<stdio.h>


typedef unsigned int UINT;

UINT ToggleBits(UINT iNo,UINT iPos1,UINT iPos2)\
{
  UINT iResult=0;
  UINT iMask1 =0x1;
  UINT iMask2 =0x1;
  UINT iMask =0;

  iMask1=iMask1<<(iPos1-1);
  iMask2=iMask2<<(iPos2-1);

  iMask=iMask1|iMask2;

  iResult=iNo ^ iMask;

  return iResult;
}



int main()
{
  UINT iValue     = 0;
  UINT iLocation1 = 0;
  UINT iLocation2 = 0;
  UINT iRet       = 0;

    printf("Enter No:\n");
    scanf("%d",&iValue);

    printf("Enter 1'st  bit position :\n");
    scanf("%d",&iLocation1);

    printf("Enter 2'nd bit position :\n");
    scanf("%d",&iLocation2);

  iRet=ToggleBits(iValue,iLocation1,iLocation2);

    printf("Updated No :%d\n",iRet);



  return 0;
}