#include<stdio.h>



int main()
{
    int iCount=0;
    char *str="Ganesh..";
    
    while(*str!='\0')
    {
      iCount++;
        str++;
    }

    printf("Lenth of String is :%d\n",iCount);

    return 0;
}