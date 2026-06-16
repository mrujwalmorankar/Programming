//WAP accept n  numbers from user and accept onr another number as NO,return index of last occurence of that no..


#include<stdio.h>
#include<stdlib.h>



 int LastOcc(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
  
  for(iCnt=iLength-1;iCnt>=0;iCnt--)
  {
    if(Arr[iCnt]==iNo)
    {
        return iCnt;
    }
    
  }
  return -1;

}


int main()
{
    int iCnt=0;
    int iValue=0;
    int iSize=0;
    int *p=NULL;
    int iRet=0;

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

        iRet=LastOcc(p,iSize,iValue);

       if(iRet==-1)
       {
            printf("there is no such number");
       }
       else
       {
           printf("Last occurence number is %d",iRet);
         
          }

        free(p);

        return 0;



}