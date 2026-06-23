#include<stdio.h>
#include<string.h>

//Call by value
void Swap(int NO1,int NO2)
{

    int temp=0;
       
     temp=NO1;
     NO1=NO2;
     NO2=temp;


}

int main()
{

    int i=11;
    int j=21;



     Swap(i,j);

         printf("%d\n",i);

        printf("%d\n",j);



    return 0;

}