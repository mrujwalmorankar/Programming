#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 bool LinearSearch(int Arr[],int iSize,int iNo)
{
     int iCnt=0;
     bool bFlag=false;

           //    5<0
    for(iCnt=0;iCnt<iSize;iCnt++)
 {
    if(Arr[iCnt]==iNo)  
    {
      bFlag=true;
      break; //break mule loop chya baher
   }

}
return  bFlag;//return function chya baher 

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
