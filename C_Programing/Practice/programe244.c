#include<stdio.h>



void Display(char str[])
{
    printf("%c\n",str[0]);
    printf("%c\n",str[1]);
    printf("%c\n",str[2]);
}



int main()
{
   char Arr[50]={'\0'};


  printf("Enter String :");
  scanf("%[^'\n']s",Arr);//spacial scanf
      //negate symbol(rejects ,regular expression)

  printf("Enter String is :%s\n",Arr);

  Display(Arr);
    return 0;
}