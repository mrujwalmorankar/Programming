//WAP which accept no from user and display  its table 



#include<stdio.h>


  void Table(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

    int iCnt = 0;
   

    for(iCnt = 1; iCnt <=10; iCnt++) //TAble logic
    {
        printf("%d\n" ,iNo * iCnt);
    }
   
}


int main()
{
    int iValue = 0;

    printf("Enter number   : ");
    scanf("%d",&iValue);

  Table(iValue);


    return 0;
}
