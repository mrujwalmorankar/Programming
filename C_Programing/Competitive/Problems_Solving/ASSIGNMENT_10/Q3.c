//WAP which accept range  from user and return addition of all  numbers
//  in between that range ..(Range should contain positive number )

#include<stdio.h>

int RangeSum(int iStart,int iEnd)
{
    
    int iSum=0;
   
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
        iSum=iSum+iStart;
         
         iStart++;
    }
    return iSum;
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

  iRet = RangeSum(iValue1,iValue2);
  printf("Addition is : %d ",iRet);
    



    return 0;
}
