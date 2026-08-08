#include<stdio.h>

int CountCapital(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCount++;
        }

        str++;

        CountCapital(str);
    }

    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter String : \n");
    scanf(" %[^\n]", Arr);

    printf("%s\n", Arr);

    int iRet = CountCapital(Arr);

    printf("No of capital letters are : %d", iRet);

    return 0;
}