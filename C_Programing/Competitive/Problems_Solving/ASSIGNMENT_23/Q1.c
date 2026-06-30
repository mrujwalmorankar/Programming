//Accept number of rows and no of columns from user and display below pattern ...

#include<stdio.h>


void Pattern(int iRow, int iCol)
{
    int iCnt = 0, j = 0;

    for(iCnt = 1; iCnt <= iRow; iCnt++)//for rows
    {
        for(j = 1; j <= iCol; j++)//for column displaying 
        {
            printf("*\t", j * 2);
        }
        printf("\n");
    }
}


int main()
{
 int iValue1=0;
 int iValue2=0;

   printf("Enter No of Rows :");
   scanf("%d",&iValue1);
   
   printf("Enter No of Columns :");
   scanf("%d",&iValue2);

   Pattern(iValue1,iValue2);

    return 0;
}

