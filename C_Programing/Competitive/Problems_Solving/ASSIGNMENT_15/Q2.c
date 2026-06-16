//WAP accept n  numbers from user and accept onr another number as NO,return index of first occurence of that no..


#include<stdio.h>
#include<stdlib.h>



 int FirstOcc(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
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

        iRet=FirstOcc(p,iSize,iValue);

        printf("Index of no is  %d:",iRet);

        free(p);

        return 0;



}