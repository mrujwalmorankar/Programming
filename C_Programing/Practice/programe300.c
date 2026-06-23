#include<stdio.h>

void strRevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;   // Last character वर आणा

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[50];

    printf("Enter String : \n");
    scanf("%[^\n]", Arr);

    strRevX(Arr);

    printf("Updated String is : %s\n", Arr);

    return 0;
}