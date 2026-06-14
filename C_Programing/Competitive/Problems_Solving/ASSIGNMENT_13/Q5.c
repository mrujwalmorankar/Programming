//WAP which accept n no   from user and display all such elements which are   divisible multiples of 11
#include<stdio.h>
#include<stdlib.h>

  
void Display(int Arr[],int iLength)
{
    int iCnt=0;
   
    int iMultiple=0;

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if((Arr[iCnt]%11)==0) 
    {
     printf("\n Multiples of 11 are : %d\n",Arr[iCnt]);
    }
  
    printf;
  }
}


int main()
{
      int *p=NULL;//pointer initialization
      int iSize=0;
      int iCnt=0;
      int iRet=0;
      
      

    printf("Enter number of Elements  : \n");
    scanf("%d",&iSize);

    p=(int*)malloc(iSize*sizeof(int));//Dynamic memory allocation 

if(p==NULL)
{
      
 printf("Unable to allocate memory\n");
 return -1;
}
 printf("\nEnter %d  elements \n ",iSize);

for(iCnt=0; iCnt < iSize ; iCnt++)
{
     printf("\nEnter  element no %d\n",iCnt+1);
     scanf("%d",&p[iCnt]);
}

 Display(p,iSize);
  
 
 free(p);

    return 0;
}

