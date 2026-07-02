//WAP accept of rows and number of columns from user and display below pattern...

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)//row
    {
        if(i % 2 != 0)//condition for odd
        {
            for(j = 1; j <= iCol; j++)
            {
                printf("%d\t", j);
            }
        }
        else//condition for even 
        {
            for(j = 0; j < iCol; j++)
            {
                printf("%c\t", 'a' + j);
            }
        }

        printf("\n");
    }
}

int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter No of Rows : ");
    scanf("%d", &iRow);

    printf("Enter No of Columns : ");
    scanf("%d", &iCol);

    Pattern(iRow, iCol);

    return 0;
}


