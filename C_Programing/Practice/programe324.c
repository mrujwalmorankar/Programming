#include<stdio.h>


typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 1;
    int  iCnt =  1;

    for(iCnt = 1; iCnt <= 32; iCnt++)
    {
         printf("%d : %X\n",iCnt,iMask);//%u unsigned
          iMask=iMask<<1;
    }
    return 0;
}