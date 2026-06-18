//WAP accept n  numbers from user and return largest value..


#include<stdio.h>
#include<stdlib.h>


int Maximum(int Arr[],int iLength)
{
  int iCnt=0;
  int iMax=0;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
   if(Arr[iCnt]>iMax)
   {
     iMax=Arr[iCnt];
   
   }
    
  }
  return iMax ;
  
  

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

        iRet=Maximum(p,iSize);

        printf("Largest  no  is : %d",iRet);


        free(p);

        return 0;



}