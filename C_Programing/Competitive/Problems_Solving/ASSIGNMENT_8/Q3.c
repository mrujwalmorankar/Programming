//WAP which accept distance in Kilometer and Convert it into meter
//(1Km=1000 meter)


#include<stdio.h>


     int KM_to_Meter(int iNo)
{
   int iKm=0;
   
   iKm=1000;
   

    return iNo*iKm; 
}




int main()
{
    int iValue= 0;
    int  iRet=0;

    printf("Enter Distance  : ");
    scanf("%d",&iValue);
   

 iRet=  KM_to_Meter(iValue);
 printf("Converted Distance into KM and  meter is: %d ",iRet);

    return 0;
}
