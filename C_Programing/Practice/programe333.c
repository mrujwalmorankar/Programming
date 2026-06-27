#include<stdio.h>


typedef unsigned int UNIT;

int main()
{
  UNIT iMask=0x1;
  UNIT iNo=0;
  UNIT iPos=0;

  printf("Accept Number :\n ");
  scanf("%d",&iNo);

  printf("Enter Bit Position :\n ");
  scanf("%d",&iPos);
 
   iMask=iMask<<(iPos-1);//positon la 1 bit save zali

   iNo=iNo ^ iMask; 


 
     printf("Updated  Number : %d\n",iNo);

    
    return 0;
}