#include<stdio.h>


typedef unsigned int UNIT;
//pos 23
int main()
{
  UNIT iMask=0xFFBFFFFF;
  UNIT iNo=0;
  UNIT iPos=0;

  printf("Accept Number :\n ");
  scanf("%d",&iNo);

 

   iNo=iNo & iMask; 


 
     printf("Updated  Number : %d\n",iNo);

    
    return 0;
}