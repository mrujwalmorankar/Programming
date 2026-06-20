#include<stdio.h>
#include<string.h>


int main()
{
    int iRet=0;
    char str[]="Jay Ganesh...";
      
    iRet=strlen(str);
    printf("Lenth of String is :%d\n",iRet);
    iRet=sizeof(str);
    printf("Size of String is :%d\n",iRet);

    return 0;
}