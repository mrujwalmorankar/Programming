#include<stdio.h>
#include<string.h>



void RevereseDisplay(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char Arr[50]={'\0'};


    printf("Enter String : \n");
    scanf("%[^\n]s",Arr);



RevereseDisplay(Arr);

    return 0;

}