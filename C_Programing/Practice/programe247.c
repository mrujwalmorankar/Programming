#include<stdio.h>



int strlenX(char  *str)//user defined 
{
  *str='A';

}

int main()
{
    
    char Arr[50]={'\0'};
    int iRet=0;


  printf("Enter String :");
  scanf("%[^'\n']s",Arr);//spacial scanf
      //negate symbol(rejects ,regular expression)

  printf("Enter String is :%s\n",Arr);

 iRet= strlenX(Arr);
  printf("String is : %s",Arr);

return 0;
}