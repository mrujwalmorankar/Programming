//WAP which accept range  from user and return addition of all even numbers
//  in between that range ..(Range should contain positive number )

#include<stdio.h>

int RangeSumEven(int iStart,int iEnd)
{
    
    int iSum=0;
    int iEvenSum=0;

    if((iStart < 0) || (iEnd < 0) )
    {
         printf("****Invalid Range****\n");
         return 0;
    }

if(iStart > iEnd)
{
    printf("**** Invalid Range ****\n");
    return 0;
}

    while(iStart <= iEnd)
    {    
        if(iStart%2==0)
        {
        iEvenSum=iEvenSum+iStart;
        }
         iStart++;
    }
    return iEvenSum;
}




int main()
{
    int iValue1=0 ; 
    int iValue2=0 ; 
    int iRet=0;
    printf("Enter starting point  : ");
    scanf("%d",&iValue1);

    printf("Enter ending point  : ");
    scanf("%d",&iValue2);

  iRet = RangeSumEven(iValue1,iValue2);
  printf("Addition of all  Range of numbers is  : %d ",iRet);

    return 0;
}
