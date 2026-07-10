#include<stdio.h>


struct node 
{
      int data ;//4(int)//4(padding)
      struct node *next;//8 
      
      
};
int main()
{

    struct node obj;

    printf("%d\n",sizeof(obj));//16
    
    return 0;
}