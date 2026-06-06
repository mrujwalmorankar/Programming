#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//Time complexity less than n

 bool LinearSearch(int Arr[],int iSize,int iNo)
{
     int iCnt=0;
    int iCount=0;

           //    5<0
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
      if(iNo==Arr[iCnt])
      {
        iCount++;
        break;
      }
}
   if(iCount==0)
  {
   return false;
  }
  else
  {
    return true;
  }
}


int main()
{
   int *Brr=NULL;
   int iLength =0, iCnt=0,iValue=0;
   bool bRet=false;

   printf("Enter the  no of elements :");
   scanf("%d",&iLength);

   Brr=(int *)malloc(sizeof(int)*iLength);


   printf("Enter the elements : \n");

   for(iCnt=0;iCnt<iLength;iCnt++)
   {
    scanf("%d",&Brr[iCnt]);
   }

    printf("Enter the element that you want to Search :");
   scanf("%d",&iValue);

 bRet=LinearSearch(Brr,iLength,iValue);

 if(bRet==true)
{
 printf("Element is present  ");
}
else
{
 printf("Element is not present  ");
}
 free(Brr);
   
 return 0;
}
