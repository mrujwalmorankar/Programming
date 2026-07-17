#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;///%%%%%%%%%
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

void Display(PNODE first, PNODE Last)
{
    if((first == NULL) && (Last == NULL))
    {
        printf("Linked List is empty\n");
        return;
    }
   printf(" <=> "); 
    do
    {
        printf(" | %d | <=> ", first->data);
        first = first->next;
    }while(first != Last->next);

    printf("\n");
}

 int Count(PNODE first, PNODE Last)
{
    int iCount = 0;

    if((first == NULL) && (Last == NULL))
    {
        return iCount;
    }

    do
    {
        iCount++;
        first = first->next;
    }while(first != Last->next);

    return iCount;
}

void Insertfirst(PPNODE first, PPNODE Last, int iNo)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;

    if((*first == NULL) && (*Last == NULL))
    {
        *first = newn;
        *Last = newn;

        newn->next = newn;
        newn->prev = newn;
    }
    else
    {
        newn->next = *first;
        newn->prev = *Last;

        (*first)->prev = newn;
        (*Last)->next = newn;

        *first = newn;
    }
}
void Insertlast(PPNODE first, PPNODE Last, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev =NULL;///%%%%%%%%%

    if((*first == NULL) && (*Last == NULL))
    {
        *first = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        newn->prev =*Last;///%%%%%%&&&&&
        *Last = newn;
    }

    (*Last)->next = *first;
    (*first) ->prev=*Last;
}

void InsertAtPos(PPNODE first, PPNODE Last, int iNo, int iPos)
{
  int i=0;

 int iCount =0;
 PNODE newn=NULL;
 PNODE temp =NULL;

 iCount=Count(*first,*Last);
 
  if((iPos<1)||(iPos>iCount+1))
  {
    printf("Invalid Position");
  }
  if(iPos==1)
  {
    Insertfirst(first,Last,iNo);

  }
  else if(iPos == iCount+1)
  {
    Insertlast(first,Last,iNo);

  }
  else
  {
    temp=*first;

    newn=(PNODE)malloc(sizeof(NODE));

    newn->data=iNo;
    newn->next=NULL;
    newn->prev=NULL;

    for(i=1;i<iPos-1;i++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next->prev=newn;

    temp->next=newn;
    newn->prev=temp;

  }
}



void Deletefirst(PPNODE first, PPNODE Last)
{
    if((*first == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*first == *Last)
    {
        free(*first);
        *first = NULL;
        *Last = NULL;
    }
    else
    {
        *first = (*first)->next;

        (*Last)->next = *first;

        free((*first)->prev);

        (*first)->prev = *Last;
    }
}

void DeleteLast(PPNODE first, PPNODE Last)
{
    if((*first == NULL) && (*Last == NULL))
    {
        return;
    }
    else if(*first == *Last)
    {
        free(*first);
        *first = NULL;
        *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;

        free((*Last)->next);

        (*Last)->next = *first;
        (*first)->prev = *Last;
    }
}


void DeleteAtPos(PPNODE first, PPNODE Last, int iPos)
{
  int i=0;
 PNODE temp=NULL;
 int iCount =0;
 

 iCount=Count(*first,*Last);
 
  if((iPos<1) || (iPos>iCount))
  {
  
    printf("Invalid Position");
    return;
  }

  if(iPos==1)
  {
    Deletefirst(first,Last);

  }
  else if(iPos == iCount)
  {
    DeleteLast(first,Last);

  }
  else
  {
    temp=*first;

    for(i=1;i<iPos-1;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
    free(temp->next->prev);
    temp->next->prev=temp;      
 
   }

}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    int iRet=0;

    Insertfirst(&head, &tail, 51);
    Insertfirst(&head, &tail, 21);
    Insertfirst(&head, &tail, 11);

   Insertlast(&head, &tail, 101);
    Insertlast(&head, &tail, 111);
    Insertlast(&head, &tail, 121);

    Display(head, tail);

      iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);


    Deletefirst(&head,&tail);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);

      DeleteLast(&head,&tail);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);

    InsertAtPos(&head, &tail, 105,4);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);

     DeleteAtPos(&head, &tail, 4);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);

    




    return 0;
}