//Write A programe which accept radius of circle from user and calculate its Area.Consider vallue of PI as 3.14
//(Area=PI*Radius*Radius)


#include<stdio.h>


     double  CircleArea(float fRadius)
{
    
  double dArea=0;
   float PI=3.14;

 dArea=(PI*fRadius*fRadius);
 

    return dArea; 
}




int main()
{
    float fValue = 0.0f;
    double dRet=0.0;

    printf("Enter Radius : ");
    scanf("%f",&fValue);

 dRet= CircleArea(fValue);
 printf("Calculated Area is  : %lf ",dRet);

    return 0;
}
