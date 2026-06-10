//WAP which accept no from user and if no is less than 50 then print small ,
//if it is greater than 50 and less than 100 then print medium,
//if it is grater than 100 then print large 

#include<stdio.h>

void Number(int iNo)
{
    
  {
       if(iNo<=50<=100)
       {
        printf("----Medium----");
       }
       else if(iNo>=100)
       {
        printf("----LARGE----");
       }
       else
       {
        printf("----small----");
       }
  }
}

int main()
{
    int iValue=0;

    printf("ENTER NUMBER");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;

}

