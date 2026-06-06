//Input :5
//Output : 0 1 2 3 4 5
#include<stdio.h>

void Display()
{
    int iCnt = 0;
    
  for(iCnt=0;iCnt<=5;iCnt++)
 {
    printf("%d\t",iCnt);  
 }
 printf("\n");
}
int main()
{
  int iValue=0;
 
  printf("Enter number :\n");
  scanf("%d",&iValue);

  Display (iValue);

   return 0;
}