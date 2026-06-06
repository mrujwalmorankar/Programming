#include<stdio.h>
#include<stdlib.h>




int Minimum(int Arr[],int iSize)
{
     int iMin=0;
     int iCnt=0;

      iMin=Arr[0];
       
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      if(iMin > Arr[iCnt])
      {
       iMin=Arr[iCnt];
       
      }
   }
    return iMin;
}



int main()
{
   int *Brr=NULL;
   int iLength =0, iCnt=0,iRet=0;
 

   printf("Enter the  no of elements :");
   scanf("%d",&iLength);

   Brr=(int *)malloc(sizeof(int)*iLength);


   printf("Enter the elements : \n");

   for(iCnt=0;iCnt<iLength;iCnt++)
   {
    scanf("%d",&Brr[iCnt]);
   }


 iRet=Minimum(Brr,iLength);

 printf("Minimum element is : %d",iRet);

 free(Brr);
   
 return 0;
}
