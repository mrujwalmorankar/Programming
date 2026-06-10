//WAP which accept no from user and print its number  line ..


#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;

     for ( iCnt = -iNo;  iCnt <= iNo; iCnt++)//iCnt 4 asel  -4 ;iCnt -4 hoye paryant ;iCnt++ 1 ne vadhva
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