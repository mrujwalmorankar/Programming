//WAP which accept no from user and return the multiplication of all digits



#include<stdio.h>


    int MultiDigits(int iNo)
{
 
    int iDigit=0;
    int iMulti=1;
   

    if(iNo <= 0)
    {
        iNo = -iNo;    // Negative number positive करा
    }

 while(iNo != 0)
{
    iDigit = iNo % 10;   // शेवटचा अंक काढतो

     iMulti=iMulti*iDigit;

    iNo = iNo / 10;  // शेवटचा अंक काढून टाकतो
    
  

}

   

return iMulti;
}

int main()
{
    int iValue=0 ; int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

  iRet=MultiDigits(iValue);

printf("Multiplication of all digits are  : %d",iRet);
    return 0;
}
