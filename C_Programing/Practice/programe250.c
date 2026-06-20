#include<stdio.h>


                
int Count(const char  * str)//user defined 
{
    int iCount=0;
    while (*str!=0)
    {
        if(*str=='a')
        {
        iCount++;
        }
        str++;

    }
    
    return iCount;
    
}

int main()
{
    
    char Arr[50]={'\0'};
    int iRet=0;


  printf("Enter String :");
  scanf("%[^'\n']s",Arr);//spacial scanf
      //negate symbol(rejects ,regular expression)

  printf("Enter String is :%s\n",Arr);

 iRet= Count(Arr);
  printf("Frequency is : %d",iRet);

return 0;
}