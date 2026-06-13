//WAP which accept range  from user and DISPLAY of all even numbers
//  in between that range ..(Range should contain positive number )

#include<stdio.h>

void RangeDisplayEven(int iStart,int iEnd)
{
    
    

    if((iStart < 0) || (iEnd < 0) )
    {
         printf("****Invalid Range****\n");
         return;
    }

if(iStart > iEnd)
{
    printf("**** Invalid Range ****\n");
    return ;
}

    while(iStart <= iEnd)
    {    
        if(iStart%2==0)
        {
        printf("%d\t",iStart);
        }
        iStart++;
    }
   
}




int main()
{
    int iValue1=0 ; 
    int iValue2=0 ; 

    printf("Enter starting point  : ");
    scanf("%d",&iValue1);

    printf("Enter ending point  : ");
    scanf("%d",&iValue2);

   RangeDisplayEven(iValue1,iValue2);
  

    return 0;
}
