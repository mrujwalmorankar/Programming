//WAP which accept no from user and display  its table in reverse order 



#include<stdio.h>


    void TableRev(int iNo)
{

    if(iNo < 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

    int iCnt = 0;
   

    for(iCnt = 10; iCnt >=1; iCnt--) //TAble logic
    {
        printf("%d\n" ,iNo * iCnt);
    }
   
}


int main()
{
    int iValue = 0;

    printf("Enter number   : ");
    scanf("%d",&iValue);

  TableRev(iValue);


    return 0;
}
