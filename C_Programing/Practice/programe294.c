#include<stdio.h>
#include<string.h>



void RevereseDisplay(char *str)
{
    char *start =NULL;

    start=str;

    while (*str!='\0')
    {
        str++;
    }

    str--;
    
     while (start<=str)
    {
         printf("%s\n",str);
  
          str--;
    }
    printf("\n");
    
}

int main()
{
    char Arr[50]={'\0'};


    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);



     RevereseDisplay(Arr);

    return 0;

}