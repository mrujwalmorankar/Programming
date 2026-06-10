//WAP which accept no from user and print numbers till that number..

#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;

     for ( iCnt = 1;  iCnt < iNo; iCnt++)
    {
        printf(" %d\t",iCnt);
    }
}



int main()
{
    int iValue =0;

    printf("ENTER NUMBER :");
    scanf("%d",&iValue);

    Display(iValue);


    return 0;
}