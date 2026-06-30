//Accept number from user and display below pattern ...

#include<stdio.h>



void Pattern(int iNo)
{
  char ch='\0';
 for(ch = 'A'; ch < ('A' + iNo); ch++)
  {
    printf("%c\t",ch);
  }
  
}

int main()
{
 int iValue=0;

   printf("Enter No of Elements :");
   scanf("%d",&iValue);

   Pattern(iValue);

    return 0;
}

