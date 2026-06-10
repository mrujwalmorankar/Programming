//WAP which  accept number from user and print that number of $ and * on screen

#include<stdio.h>

void Pattern(int iNo)
{
    iNo=-iNo;
    
    int iCnt=0;

    for ( iCnt = 0;  iCnt < iNo; iCnt++)
    {
        printf(" $ *",iCnt);
    }

}



int main()
{
    int iValue =0;

    printf("ENTER NUMBER :");
    scanf("%d",&iValue);

    Pattern(iValue);


    return 0;
}