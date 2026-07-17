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

 /*int Count(PNODE first, PNODE Last)
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
        newn->next = *first;
        *first = newn;
    }

    (*Last)->next = *first;
    (*first) ->prev=newn;
    *first=newn;
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

/*void InsertAtPos(PPNODE first, PPNODE Last, int iNo, int iPos)
{
  int i=0;
 PNODE temp=NULL;
 int iCount =0;
 PNODE newn=NULL;

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

    for(i=1;i<iPos-1;i++)
    {
        temp=temp->next;
    }
    newn->next=temp->next;
    temp->next=newn;

  }
}/*

void Deletefirst(PPNODE first, PPNODE Last)
{
   if((*first == NULL) && (*Last == NULL))
   {
    return;
   }
   else if(*first ==*Last)
   {
    free(*first);

    *first = NULL;
    *Last  = NULL;
   }
   else
   { 
      
      *first=(*first)->next;

        free((*Last)->next);/// Changed
        (*Last)->next = *first;
   }
   
}

void DeleteLast(PPNODE first, PPNODE Last)
{
    PNODE temp=NULL;
   if((*first == NULL) && (*Last == NULL))
   {
    return;
   }
   else if(*first ==*Last)
   {
    free(*first);

    *first = NULL;
    *Last  = NULL;
   }
   else
   {
     temp=*first;
     
     while(temp->next!=*Last)
     {
        temp=temp->next;
        
     }
     free(*Last);   ///free(temp->next);
        *Last=temp;
        (*Last)->next = *first;
   }
}

void DeleteAtPos(PPNODE first, PPNODE Last, int iPos)
{
  int i=0;
 PNODE temp=NULL;
 int iCount =0;
 PNODE target=NULL;

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
    target=temp->next;

    temp->next=target->next;

    free(target);
      
 
   }

}*/

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

     /* iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);


    /*Deletefirst(&head,&tail);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);

      DeleteLast(&head,&tail);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);

    InsertAtPos(&head, &tail, 105,5);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);

     DeleteAtPos(&head, &tail, 4);
     Display(head, tail);

     iRet=Count(head,tail); 
    printf("No of nodes are : %d\n",iRet);*/

    




    return 0;
}