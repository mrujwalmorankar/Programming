#include<stdio.h>
#include<stdlib.h>

int main()
{
  int *Brr=NULL;
  int iLength=0;
  int iCnt=0;

  //Step 1 :Accept the no of elements
  printf("Enter no Of elemnets :\n ");
  scanf("%d",&iLength);

  //Step 2: Allocate the memory(Dynamic)
  Brr=(int*)malloc(iLength * sizeof(int));
     //type        size of iLength
    //casting 
 
  //Step 3: Accept the value from user
  printf("Enter the Elements :\n");
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    scanf("%d",&Brr[iCnt]);
  }

  //Step 4: Use the memory(logic)


  //Step 5: Deallocate the memory
  free(Brr);



    return 0;
}