#include<stdio.h>




void Display(int iNo)
{
 

      
     while(iNo!=0)
     {                             
        printf("Jay Ganesh...... %d\n",iNo);
        iNo--;
        
        Display(iNo);
     }
    
}


int main()
{
 
     int iValue=0;

     printf("Enter Frequency :  ");
     scanf("%d",&iValue);
 
      Display(iValue); 

      printf("End Of main");
 
 return 0;
}