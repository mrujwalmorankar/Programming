//WAP which accept n no   from user and return difference between summation of even element and summations of odd elements..
#include<stdio.h>
#include<stdlib.h>

  
int Difference(int Arr[],int iLength)
{
    int iCnt=0;
    int iEvenSum=0;
    int iOddSum=0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]%2==0)
    {
        iEvenSum=iEvenSum+Arr[iCnt];
    }
    else
    {
        iOddSum=iOddSum+Arr[iCnt];
    }
  }
return  iEvenSum- iOddSum;
   
}


int main()
{
      int *p=NULL;//pointer initialization
      int iSize=0;
      int iCnt=0;
      int iRet=0;
      
      

    printf("Enter number of Elements  : ");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));//Dynamic memory allocation 

if(p==NULL)
{
      
 printf("Unable to allocate memory");
 return -1;
}
 printf("Enter %d  elements ",iSize);

for(iCnt=0; iCnt < iSize ; iCnt++)
{
     printf("Enter  elements no : %d\n",iCnt+1);
     scanf("%d",&p[iCnt]);
}

 iRet =Difference(p,iSize);
  
 printf("Reslts is : %d",iRet);

 free(p);

    return 0;
}
