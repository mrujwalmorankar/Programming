//WAP which accept no from user and return the Count of  Digits in between 3 and 7 



#include<stdio.h>


    int CountRange  (int iNo)
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
  
    if ((iDigit >3)&&(iDigit < 7))
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

  iRet= CountRange(iValue);

printf("Count of Digits in between 3 and 7 : %d",iRet);
    return 0;
}
