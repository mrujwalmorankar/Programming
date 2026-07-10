#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data ;
    struct node * next;
    struct node * prev;                  //$
};

typedef struct node    NODE;
typedef struct node *  PNODE;
typedef struct node ** PPNODE;
 

int Count(PNODE first)
{ 
  int iCount=0;

   while(first!=NULL)
       {
        iCount++;
        first=first->next;
       }
    return iCount;
   


return 0;
}

void Display(PNODE first)
{
    printf("\nNULL <=> ");
      while(first != NULL)
      {
        printf("| %d | <=> ",first->data);
        first = first -> next;
      }
    printf("NULL\n");

}

void Insertfirst(PPNODE first,int iNo)                                           
{
    PNODE newn = NULL;
  
    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;//$$

        if(NULL == *first)//IF LL IS EMPTY
        {
          *first = newn;//*first=head 
        }
        else
        {
           newn->next=*first;
           (*first) -> prev = newn;   //$$
            *first = newn;  
        }

}

void Deletefirst(PPNODE first)
{
  
}

void InsertLast(PPNODE first,int iNo)
{
   PNODE newn = NULL;
   PNODE temp = NULL; 
  
   newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;//$$

        if(NULL==*first)//IF LL IS EMPTY
        {
          *first=newn;
        }
        else
        {
          temp = *first;
           
            while(temp->next!=NULL)
            {
               temp=temp->next;
            }

            temp->next=newn;
                
             newn->prev=temp;  //$$
             
 
        }

}
void DeleteLast(PPNODE first)
{
  
}
void InsertAtPos(PPNODE first,int iNo,int iPos)
{

}
void DeleteAtPos(PPNODE first,int iPos)
{

}
int main()
{
  PNODE head=NULL;  


    Insertfirst(&head,51);
     Insertfirst(&head,21);
      Insertfirst(&head,11);

      InsertLast(&head,101);
       InsertLast(&head,111);
        InsertLast(&head,121);
    
      Display(head);



      int iRet=0;

        iRet=Count(head);

        printf("Number of elements are : %d\n",iRet);

    return 0;

}
