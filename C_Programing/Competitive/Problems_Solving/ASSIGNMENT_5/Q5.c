//WAP which accept n from user and print 5 multiples of  n ..



#include<stdio.h>


void MultipleDisplay(int iNo)
{
    int iCnt = 0;

     for ( iCnt = 1;  iCnt <= 5; iCnt++)
     
    {
        printf(" %d\t",iNo* iCnt);
    }
}



int main()
{
    int iValue =0;

    printf("ENTER NUMBER :");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);


    return 0;
}