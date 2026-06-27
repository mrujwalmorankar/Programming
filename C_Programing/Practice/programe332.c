#include<stdio.h>


typedef unsigned int UNIT;
//pos 28
int main()
{
  UNIT iMask=0;
  UNIT iNo=0;


  printf("Enter Number :\n ");
  scanf("%d",&iNo);
 
   iMask=0x8000000;

   iNo=iNo ^ iMask; 


 
     printf("Updated  Number : %d\n",iNo);

    
    return 0;
}