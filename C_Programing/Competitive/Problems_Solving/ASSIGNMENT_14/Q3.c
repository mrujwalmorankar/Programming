//WAP accept n no from user and cwheck whether that number contains 11 in it or not 

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define TRUE 1
#define FALSE 0

bool Check(int Arr[],int iLength)
{
  int evenFrequency=0;
  int oddFrequency=0;
  int iCnt=0;
    
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt])==11)
    {
        return true;

    }
    

  }
   return true;
    

}

int main()
{
    int iSize=0;
    int *p=NULL;
    bool bRet=0;
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
     
        bRet=Check(p,iSize);
       
         if(bRet==true)
         {
            printf("11 is Present ");

         }
         else
         {
            printf("11 is Absent ");
         }

          free(p);
         return 0;
    }
     



