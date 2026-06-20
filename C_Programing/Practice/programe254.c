#include<stdio.h>


                
int CountSmall(const char  * str)//user defined 
{
    int iCount=0;
    while (*str!=0)
    {
        if(*str>=97&&*str<=122)
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


 iRet= CountSmall(Arr);
  printf("Frequency is : %d",iRet);

return 0;
}