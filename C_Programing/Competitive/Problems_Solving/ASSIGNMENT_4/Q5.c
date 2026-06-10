//WAP which accept number from user and return Difference betn summation of all its Factors and Non Factors 


#include<stdio.h>

int FactDiff(int iNo)
{
  int   iCnt=0;
   int iSum=0;
  int   iNonFactSum=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
     
      if(iNo % iCnt==0 )
     {

        
            iSum=iSum+iCnt;
           

        }
        else{
            iNonFactSum=iNonFactSum+iCnt;
        }

    }
    printf("Summation of Factors is :%d\n",iSum);
    printf("Summation of Non Factors is :%d\n",iNonFactSum);

    return (iNonFactSum-iSum);
}


int  main()
{
 int iValue=0;
 int iRet=0;

 printf("Enter  number :");
 scanf("%d",&iValue);

 iRet=FactDiff(iValue);

 printf("Difference between Summations of Factor and Non Factors : %d\n ",iRet);




    return 0;

}