//WAP accept of rows and number of columns from user and display below pattern...

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)//row
    {
        
            for(j = 1; j <= iCol; j++)
            {
                 if(i % 2 != 0)//condition for odd
                 {
                  printf("%d\t", j);
                 }
                  else//condition for even 
                    { 
                    printf("%d \t", -j);
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


