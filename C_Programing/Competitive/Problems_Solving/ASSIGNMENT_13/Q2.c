//WAP which accept n no   from user and display all such elements which are divisible by 5..
#include<stdio.h>
#include<stdlib.h>

  
void Display(int Arr[],int iLength)
{
    int iCnt=0;
   

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]%5==0)
    {
         printf(" This element is Divisible by 5  : %d\n",Arr[iCnt]);
    }
     
  }
   
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

 Display(p,iSize);
  
 
 free(p);

    return 0;
}
