
#include<stdio.h>




void Display(int iNo)
{
 static int i=1;

      
     if(i<=iNo)
     {                             
        printf("%d\n",i);
        i++;
        
        Display(iNo);

     }
    
}


int main()
{
 
     int iValue=0;

     printf("Enter Frequency :  ");
     scanf("%d",&iValue);
 
      Display(iValue); 

      printf("END OF MAIN");
 
 return 0;
}