#include<stdio.h>

#pragma pack(1)
struct node 
{
      int data ;//4(int)
      struct node *next;//8 
           
};

typedef  struct node NODE;
typedef  struct node* PNODE;

int Count(PNODE first)
{
        int iCount=0;

     while(first != NULL)
    {
        iCount++; 
        first=first->next;      
    }
return iCount;
         
}

int main()
{

    PNODE head = NULL;//pointer created head
  

    NODE obj1,obj2,obj3;

    head = &obj1;
  
    obj1.data=11;
    obj1.next=&obj2;

    obj2.data=21; 
    obj2.next=&obj3;//direct memory allocation using . operator 
     
    obj3.data=51; 
    obj3.next=NULL;

  int iRet=0;

  iRet=Count(head);//Count(100)

    printf("Number oF nodes are:%d\n",iRet);
         
return 0;
}