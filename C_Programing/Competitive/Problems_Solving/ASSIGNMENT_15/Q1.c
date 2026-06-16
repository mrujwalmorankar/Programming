//WAP accept n  numbers from user and accept onr another number as NO,check whether No is present or not..


#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Check(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]==iNo)
    {
        return TRUE;
    }
    
  }
  return FALSE;

}


int main()
{
    int iCnt=0;
    int iValue=0;
    int iSize=0;
    int *p=NULL;
    BOOL bRet=FALSE;

    printf("Enter Number of Elements :\n ");
    scanf("%d",&iSize);


    p=(int*)malloc(iSize*sizeof(int));

     
    if(p==NULL)
     {
        printf("Unable to allocte the memory\n");
        return-1;

      }
      printf("Enter %d Elements\n",iSize);

      for(iCnt=0;iCnt<iSize;iCnt++)
        {
            printf("\nEnter Element :%d\n",iCnt+1);
            scanf("%d",&p[iCnt]);

        }
            

     printf("Enter another Number:\n");
             scanf("%d",&iValue);
        bRet=Check(p,iSize,iValue);

        if(bRet==TRUE)
        {
            printf("Number is Present\n ");
 
        }
        else
        { 
             printf("Number is Absent\n");
             
        }
        free(p);

        return 0;



}