#include<stdio.h>



int main()
{
   char Arr[50]={'\0'};


  printf("Enter String :");
  scanf("%[^'\n']s",Arr);//spacial scanf
      //negate symbol(rejects ,regular expression)

  printf("Enter String is :%s\n",Arr);

    return 0;
}