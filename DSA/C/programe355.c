#include<stdio.h>

#pragma pack(1)
struct node 
{
      int data ;//4(int)
      struct node *next;//8 
           
};
int main()
{

    struct node obj1,obj2;
  
    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21; 
    obj2.next=NULL;//direct memory allocation using . operator 
     
    printf("%u\n",&obj1.data);
    printf("%u\n",&obj2.data);

          printf("%u\n",&obj1.next);
          printf("%u\n",&obj2.next);

              printf("%d\n",&obj1.next->data);
              printf("%d\n",&obj2.next->data);

    
    return 0;
}