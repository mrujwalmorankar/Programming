//WAP accept n no from user and return frequency of even no

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[],int iLength)
{
  int evenFrequency=0;
  int oddFrequency=0;
  int iCnt=0;
    
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt])%2==0)
    {
        evenFrequency++;

    }
    
    else
    {
        oddFrequency++;

    }
   
  }
   return evenFrequency-oddFrequency;
    

}

int main()
{
    int iSize=0;
    int *p=NULL;
    int iRet=0;
    int iCnt=0;


    printf("Enter no of Elements :\n ");//size kiti ahe te sanga
    scanf("%d",&iSize);


    p=(int*)malloc(iSize*sizeof(int));
 
     if(p==NULL)
        {
          printf("Unable to Allocate the Memory");
          return -1;
        }

        printf("Enter %d Elements \n ",iSize);//jitke elemnts no taklet tevdhe insert kara

        for(iCnt=0;iCnt<iSize;iCnt++)
        {
            printf("Enter Element no %d\n ",iCnt+1);
            scanf("%d",&p[iCnt]);//array mdhe value store kara
        }
     
        iRet=CountEven(p,iSize);
       
          printf("Result is : %d",iRet);

          free(p);
         return 0;
    }
     



