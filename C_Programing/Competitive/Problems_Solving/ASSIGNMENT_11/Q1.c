//WAP which accept range  from user and display all  numbers
//  in between that range ...

#include<stdio.h>

  void RangeDisplay(int iStart,int iEnd)
{
     if(iStart>iEnd)
    {
         printf("****Invalid Range****");
         return;
    }

    while(iStart <= iEnd)
    {    
        
      printf("%d\t",iStart);
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

  RangeDisplay(iValue1,iValue2);


    return 0;
}
