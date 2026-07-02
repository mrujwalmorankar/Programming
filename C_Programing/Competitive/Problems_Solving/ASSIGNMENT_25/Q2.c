//WAP accept of rows and number of columns from user and display below pattern...

#include<stdio.h>


void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iNo;

    for(i = 1; i <= iRow; i++)
    {
        if(i % 2 != 0)
        {
            iNo = 2;     // Odd row -> Even numbers
        }
        else
        {
            iNo = 1;     // Even row -> Odd numbers
        }

        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iNo);
            iNo = iNo + 2;
        }

        printf("\n");
    }
}

int main()
{
    int iRow=0;
    int  iCol=0;

    printf("Enter rows: ");
    scanf("%d", &iRow);

    printf("Enter columns: ");
    scanf("%d", &iCol);

    Pattern(iRow, iCol);

    return 0;
}


