//WAP which accept no from user and return the Count of Even Digits 



#include<stdio.h>


    int CountEven(int iNo)
{
 
    int iDigit=0;
    int iCount=0;

    if(iNo <= 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

 while(iNo != 0)
{
    iDigit = iNo % 10;   // शेवटचा अंक काढतो

    iNo = iNo / 10;  // शेवटचा अंक काढून टाकतो
  
    if ((iDigit%2==0))
    {
        iCount ++;
    }
}
return iCount;
}

int main()
{
    int iValue,iRet = 0;

    printf("Enter number   : ");
    scanf("%d",&iValue);

  iRet= CountEven(iValue);

printf("Count of Even Digits are : %d",iRet);
    return 0;
}
