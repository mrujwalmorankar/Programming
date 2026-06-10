//Write A programe which accept one number from user and print that number of even numbers on Screen.

#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return ;
    }
    int iCnt=0;

   for(iCnt==2;iCnt<=iNo;iCnt+=2)//jr iCnt chi value 2 asel tr iNo grater than iCnt asel tr iCnt chi value 2 ne vdhava
   {
    printf("%d\n",iCnt);//ani value print kara
   }
}

int main()
{
    int iValue=0;
    printf("Enter number \n ");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;

}