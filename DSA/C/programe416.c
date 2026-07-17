#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
   int data;
   struct node *next;
   
};

 void Display(PNODE first,PNODE Last)
     {

     }
     int  Count(PNODE first,PNODE Last)
     {
       return 0;
     }
     void Insertfirst(PPNODE first,PPNODE Last,int iNo)
     {
       PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if((*first == NULL) && (*Last == NULL))
    {
        *first = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *first;
        *first = newn;
    }

    (*Last)->next = *first;
}

void Insertlast(PPNODE first, PPNODE Last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if((*first == NULL) && (*Last == NULL))
    {
        *first = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
    }

    (*Last)->next = *first;
}
     
     void Insertlast(PNODE first,PPNODE Last,int iNo)
     {

     }
     void InsertAtPos(PNODE first,PPNODE Last,int iNo,int iPos)
     {

     }
     void Deletefirst(PPNODE first,PPNODE Last)
     {

     }
     void DeleteLast(PPNODE first,PPNODE Last)
     {

     }
      void DeleteAtPos(PPNODE first,PPNODE Last,int iPos)
     {

     }

typedef struct node    NODE;
typedef struct node *  PNODE;
typedef struct node ** PPNODE;

int main()
{
 
     PNODE head = NULL;
     PNODE tail = NULL;
   
    
      Insertfirst(&head,&tail,101);
        Insertfirst(&head,&tail,51);      
          Insertfirst(&head,&tail,21);
 
    



    return 0;

}