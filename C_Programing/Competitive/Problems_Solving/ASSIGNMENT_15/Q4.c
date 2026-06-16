//WAP accept n  numbers from user and accept Range,Display all elements of that range...


#include<stdio.h>
#include<stdlib.h>



 void Range(int Arr[],int iLength,int iStart,int iEnd)
{
  int iCnt=0;
  
  for(iCnt=0;iCnt<=iLength;iCnt++)
  {
    if(iStart > iEnd)
{
    int temp = iStart;
    iStart = iEnd;
    iEnd = temp;
}
    if((Arr[iCnt]>=iStart) && (Arr[iCnt]<=iEnd))
    {
        printf("%d\n",Arr[iCnt]);
    }
    
  }
  

}


int main()
{
    int iCnt=0;
    int iSize=0;
    int *p=NULL;
    int iRet=0;
    int iValue1=0;
    int iValue2=0;

    printf("Enter Number of Elements :\n ");
    scanf("%d",&iSize);

    
            printf("Enter Starting Point:\n");
             scanf("%d",&iValue1);

             printf("Enter Ending Point:\n");
             scanf("%d",&iValue2);

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
            


        Range(p,iSize,iValue1,iValue2);


        free(p);

        return 0;



}