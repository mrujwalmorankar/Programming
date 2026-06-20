#include<stdio.h>
#include<string.h>


int main()
{
    int iCount=0;
    char *str="Ganesh..";
    
    printf("Lenth of String is :%lu\n",strlen(str));
    while(*str!='\0')
    {
      iCount++;
        str++;
    }

    printf("Lenth of String is :%d\n",iCount);
    

    return 0;
}