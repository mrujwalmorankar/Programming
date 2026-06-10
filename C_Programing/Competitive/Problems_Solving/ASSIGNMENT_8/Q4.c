//WAP which accept temperature in Fahrenheit and Convert it into Celsius.
//1 Celsius=((Fahrenheit -32 ) (*5/9))

#include<stdio.h>


     double  Fh_to_CS(float ftemp)
{
   double dCelsius=1;

   dCelsius=(ftemp -32 )* 5/9;
   
   

    return dCelsius; 
}




int main()
{
    float fValue= 0.0f;
    double  dRet=0.0;

    printf("Enter Temperture in Fahreheit   : ");
    scanf("%f",&fValue);
   

 dRet= Fh_to_CS(fValue);
 printf("Temperature in Celsius is: %lf ",dRet);

    return 0;
}
