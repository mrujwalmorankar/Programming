//Q3.program to print 5 to 1 numbers on Screen using while loop.

#include<stdio.h>
 


void Display()
{
    int i =0;
     i =5;

    while(i>=1) // i is greater than 1 ahe to paryant i print kara 
    {
        printf("%d\n",i);
        i--;//descending order ne kara
        

    }
}

int main()
{
    Display();
 return 0;

}