

#include<stdio.h>

int strlenX(char *str)
{
static   int iCount=0;

   if(*str!='\0');
   {
    iCount++;
    str++;

    strlenX( *str);
   }
   return iCount;
   
}

int main()
{
    char Arr[20]={'\0'};

    printf("Enter String : \n");
    scanf("%[^'\n']s",Arr);

    printf("%s\n",Arr);

    int iRet= strlenX(Arr);

    printf("String length is :%d",iRet);
    return 0;
}