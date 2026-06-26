#include<stdio.h>



int main()
{
  int ino=0;
  int iDigit=0;

  printf("Enter no :\n");
  scanf("%d",&ino);

  while(ino!=0)
  {
     iDigit= ino %2;
     
     printf("%d",iDigit);

     ino=ino/2;
  }
  printf("\n");
 
  return 0;
}