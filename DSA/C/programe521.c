//4
//1+2+3+4=10

//7 
//1+2+3+4+5+6+7=28

#include<stdio.h>

int Summation(int iNo)
{
     int iSum=0;
     int i=0;

     for(i=1;i<=iNo;i++)
     {
          iSum=iSum+1;
     }
     return iSum;
}

void Display(int iNo)
{
 

      
     while(iNo!=0)
     {                             
        printf("Jay Ganesh...... %d\n",iNo);
        
        
        Display(iNo-1);
     }
    
}


int main()
{
 
     int iValue=0;

     printf("Enter Frequency :  ");
     scanf("%d",&iValue);
 
      Display(iValue); 

      int iRet=Summation(iValue);

      printf("Summation is  :%d\n",iRet);
 
 return 0;
}