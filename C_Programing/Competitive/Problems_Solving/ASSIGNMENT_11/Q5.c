//WAP which accept range  from user and DISPLAY of all  numbers in reverse order
//  in between that range ..(Range should contain positive number )

#include<stdio.h>

void RangeDisplayRev(int iStart,int iEnd)
{
    
    

   
if(iStart >iEnd)
{
    printf("**** Invalid Range ****\n");
    return ;
}

    while( iEnd>=iStart)
    {    
       
        printf("%d\t",iEnd);
        iEnd--;
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

   RangeDisplayRev(iValue1,iValue2);
  

    return 0;
}
