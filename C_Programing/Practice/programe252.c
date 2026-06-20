#include<stdio.h>


                
int CountVowels(const char  * str)//user defined 
{
    int iCount=0;
    while (*str!=0)
    {
        if(*str=='a'||
            *str=='e'||
            *str=='i'||
            *str=='o'||
            *str=='u')
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

 iRet= CountVowels(Arr);
  printf("Frequency is : %d",iRet);

return 0;
}