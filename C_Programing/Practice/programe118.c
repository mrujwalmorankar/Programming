#include<stdio.h>

int DisplaySummation(int Arr[],int iSize)
 {
  int iSum=0;
  int iCnt=0;
   
   for(iCnt=0;iCnt<iSize;iCnt++)
     {
      iSum=iSum+Arr[iCnt];
     }
     return iSum;
 }
int main()
{
  int iLength =4;
  int iRet=0;
  int iCnt=0;
  
   printf("Enter the Elements :\n");
  int Brr[iLength];

  
  

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
    
  }

  iRet= DisplaySummation(Brr,iLength);

     
  printf("Addition of all elements :%d\n",iRet);

  return 0;
}