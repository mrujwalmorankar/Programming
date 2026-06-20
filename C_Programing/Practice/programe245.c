#include<stdio.h>



void Display(char  *str)
{
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
    str++;
    printf("%c\n",*str);
    str++;
    
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