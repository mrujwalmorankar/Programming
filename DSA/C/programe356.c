#include<stdio.h>

#pragma pack(1)
struct node 
{
      int data ;//4(int)
      struct node *next;//8 
           
};
int main()
{

    struct node obj1,obj2,obj3;
  
    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21; 
    obj2.next=&obj3;//direct memory allocation using . operator 
     
    obj3.data=51; 
    obj3.next=NULL;

    printf("%u\n",&obj1.data);
    printf("%u\n",&obj2.data);
    printf("%u\n",&obj3.data);

          printf("%u\n",obj1.next);
          printf("%u\n",obj2.next);
          printf("%u\n",obj3.next);


              printf("%d\n",obj1.data);
              printf("%d\n",obj1.next->data);
              printf("%d\n",obj1.next->next->data);
             

    
    return 0;
}