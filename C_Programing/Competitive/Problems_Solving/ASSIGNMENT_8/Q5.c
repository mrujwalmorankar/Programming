//WAP which accept area in Square Feet and Convert it into 
//square meter(1 Square feet =0.0929 square meter)

#include<stdio.h>


     double SquareMeter(int iValue)
{
   double SqFeet= 0.0929;
   double Sqmeter=0.0f;
   
    Sqmeter=iValue*SqFeet;
   
   

    return Sqmeter; 
}




int main()
{
    int iValue= 0;
    double  dRet=0.0;

    printf("Enter Area in SquareFeet  : ");
    scanf("%d",&iValue);
   

 dRet= SquareMeter(iValue);
 printf("Square meter is : %lf ", dRet);
 
     
        return 0;
 }
 