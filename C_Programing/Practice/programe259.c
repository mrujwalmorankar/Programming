#include<stdio.h>


                
void Update( char  * str)//user defined 
{
    
    while (*str!=0)
    {
        if(*str =='l')
        {
           *str='-';
        }
        str++;

    }
    

    
}

int main()
{
    
    char Arr[50]={'\0'};
  


  printf("Enter String :");
  scanf("%[^'\n']s",Arr);//spacial scanf
      //negate symbol(rejects ,regular expression)

Update(Arr);

  printf("Updated String  is : %s\n",Arr);

return 0;
}