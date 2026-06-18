//WAP accept n  numbers from user and DISPLAY summation of each  numbers
// it


#include<stdio.h>
#include<stdlib.h>



void Summation(int Arr[],int iLength)
{
  int iCnt=0;
  int iDigit=0;
  
  
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    int No = Arr[iCnt];
        int iSum = 0;
    
    while(No != 0)
{
    iDigit = No % 10;
    iSum = iSum + iDigit;
    No = No / 10;
}
       printf("Summation of %d is %d\n",Arr[iCnt],iSum);
   
   
    
  }

}


int main()
{
    int iCnt=0;
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

       Summation(p,iSize);


        free(p);

        return 0;



}