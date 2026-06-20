#include<stdio.h>


                
int CountVowels(const char  * str)//user defined 
{
    int iCount=0;
    while (*str!=0)
    {
        if(*str=='a'||*str=='A'||
            *str=='e'||*str=='E'||
            *str=='i'||*str=='I'||
            *str=='o'||*str=='O'||
            *str=='u'||*str=='U')
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
  scanf("%[^\n]s",Arr);//spacial scanf
      //negate symbol(rejects ,regular expression)


 iRet= CountVowels(Arr);
  printf("Frequency is : %d",iRet);

return 0;
}