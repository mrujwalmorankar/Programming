//WAP which accept no from user and return difference between summation of even digits and summation of odd digits



#include<stdio.h>


    int CountDiff(int iNo)
{
 
    int iDigit=0;
    int iMulti=1;
    int iSumEven=0;
    int  iSumOdd=0;
   

    if(iNo <= 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

 while(iNo != 0)
{
    iDigit = iNo % 10;   // शेवटचा अंक काढतो

    if(iDigit%2==0)
    {
     iSumEven=iSumEven+iDigit;

    iNo = iNo / 10;  // शेवटचा अंक काढून टाकतो
    }

    if(iDigit%2!=0)
    {
     iSumOdd=iSumOdd+iDigit;

    iNo = iNo / 10;  // शेवटचा अंक काढून टाकतो
    }
  
}  
return iSumEven-iSumOdd;
}

int main()
{
    int iValue=0 ; int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

  iRet=CountDiff(iValue);

printf("Multiplication of all digits are  : %d",iRet);
    return 0;
}
