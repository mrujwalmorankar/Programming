#include<stdio.h>


                
void Update( char  * str)//user defined 
{
    int iCount=0;
    while (*str!=0)
    {
        if(*str ==' L')
        {
         *str='_';
        }
        str++;

    }
    
 
}

int main()
{
    
    char Arr[50]={'\0'};
    int iRet=0;


  printf("Enter String :");
  scanf("%[^'\n']s",Arr);//spacial scanf
      //negate symbol(rejects ,regular expression)


   Update(Arr);
  printf("Update String  is : %s",Arr);

return 0;
}