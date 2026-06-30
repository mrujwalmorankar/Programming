//Accept number of rows and no of columns from user and display below pattern ...

#include<stdio.h>


void Pattern(int iRow, int iCol)
{
    int iCnt = 0, j = 0;

    for(iCnt =1; iCnt <=iRow; iCnt++)//for rows
    {
        for(j = 1; j <=iCol; j++)//for column displaying//column differ 
        {
            if (j%2==0)
            {
                 printf("#\t", j); 
            }
            else
            {
                 printf("*\t", j);
            }
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

