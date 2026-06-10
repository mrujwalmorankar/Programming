//Write A programe which accept width &height of Rectangle from user and calculate its Area.
//Area=Width *height


#include<stdio.h>


     double  RectArea(float fWidth,float fHeight)
{
    
  double dArea=0;
   float PI=3.14;

 dArea=(fWidth *fHeight);
 

    return dArea; 
}




int main()
{
    float fValue1 = 0.0f;
     float fValue2 = 0.0f;
    double dRet=0.0;

    printf("Enter Width of A Rectangle: ");
    scanf("%f",&fValue1);
    
    printf("Enter Height of A Rectangle : ");
    scanf("%f",&fValue2);

 dRet=  RectArea(fValue1,fValue2);
 printf("Calculated Area is  : %lf ",dRet);

    return 0;
}
