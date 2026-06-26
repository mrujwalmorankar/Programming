#include<stdio.h>

int main()
{
  int iNo1=0;
  int iNo2=0;
  int Ans=0;
  int iDigit=0;

  printf("Enter first no :\n");
  scanf("%d",&iNo1);

  printf("Enter Second  no :\n");
  scanf("%d",&iNo2);

  //Binary &
  Ans= iNo1 & iNo2;
  printf("AND: %d\n",Ans);

//Binary |(OR)
    Ans= iNo1 | iNo2;
  printf("OR: %d\n",Ans);

  //Binary ^(XOR)
    Ans= iNo1 ^ iNo2;
  printf("OR: %d\n",Ans);
   
 
  return 0;
}