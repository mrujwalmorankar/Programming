//WAP which accept n from user and print all odd numbers upto n ..



#include<stdio.h>


void Display(int iNo)
{
    int iCnt = 0;

     for ( iCnt = 1;  iCnt <= iNo; iCnt++)
     
    {
        if( iCnt %2!=0)
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