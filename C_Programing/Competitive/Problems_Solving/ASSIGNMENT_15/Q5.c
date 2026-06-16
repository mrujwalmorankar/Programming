//WAP accept n  numbers from user and return product of all odd elemets..


#include<stdio.h>
#include<stdlib.h>


int product(int Arr[],int iLength)
{
  int iCnt=0;
  int iProduct=1;
  
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
   if(Arr[iCnt]%2!=0)
   {
   
   iProduct=iProduct*Arr[iCnt];
   }
    
  }
  return iProduct;
  
  

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

        iRet=product(p,iSize);

        printf("Product is %d",iRet);


        free(p);

        return 0;



}