#include<stdio.h>

#pragma pack(1)
struct node 
{
      int data ;//4(int)
      struct node *next;//8 
           
};

typedef  struct node NODE;
typedef  struct node* PNODE;

int main()
{

    PNODE head = NULL;//pointer created head
  
    PNODE temp = NULL;

    NODE obj1,obj2,obj3;

    head = &obj1;
  
    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21; 
    obj2.next=&obj3;//direct memory allocation using . operator 
     
    obj3.data=51; 
    obj3.next=NULL;

    temp=head;//100

    //ITERATION
    while(temp != NULL)
    {
         printf("%d\n",temp->data);
         temp=temp->next;      
    }
        
    


             

    
    return 0;
}