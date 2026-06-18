//WAP accept n  numbers from user and DISPLAY ALL SUCH numbers which contains 3 digits in
// it


#include<stdio.h>
#include<stdlib.h>



void Digit(int Arr[],int iLength)
{
  int iCnt=0;
  int iDigit=0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
   if(Arr[iCnt]>=100 && Arr[iCnt]<=999 )
   {
    printf("Array Conducted 3 Digits inputs %d\n", Arr[iCnt]);
   
   }
    printf("");
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

       Digit(p,iSize);


        free(p);

        return 0;



}