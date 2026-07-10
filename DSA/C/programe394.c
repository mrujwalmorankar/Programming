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
   
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if((*first)->next == NULL)
    {
        free(*first);
        *first = NULL;
    }
    else
    {
        temp = *first;
        *first = (*first)->next;
        (*first)->prev = NULL;
        free(temp);
    }
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
        PNODE temp = NULL;

        if(*first == NULL)          // Linked List रिकामी आहे
        {
            return;
        }
        else if((*first)->next == NULL)   // एकच node आहे
        {
            free(*first);
            *first = NULL;
        }
        else
        {
            temp = *first;

            while(temp->next != NULL)
            {
                temp = temp->next;
            }

            temp->prev->next = NULL;
            free(temp);
        }
}

void InsertAtPos(PPNODE first,int iNo,int iPos)
{

      int i=0;
      int iCount=0;
      PNODE temp=NULL;
      PNODE newn=NULL;
      

    iCount=Count(*first);
 
      
            if((iPos < 1)||(iPos > iCount + 1))//filter
            {
                printf("Invalid Position\n");
                return;

            }
            if(iPos==1)
            {
                Insertfirst(first,iNo);
            }
            else if(iPos==iCount+1)
            {
                InsertLast(first,iNo);

            }
            else
            {
               temp=*first;
              
               newn=(PNODE)malloc(sizeof(NODE));

               newn->data=iNo;
               newn->next=NULL;
               newn->prev=NULL;

                    for(i = 1 ; i < iPos-1 ; i++)
                     {
                         temp=temp->next;
                     }
                newn->next = temp->next;/////7/7/7/
                temp->next->prev=newn;//&&&&&&&&
                temp->next=newn;///&&&&&
                newn->prev=temp;//@@@@@

            }
   
}
void DeleteAtPos(PPNODE first,int iPos)
{

       int iCount=0;

    iCount=Count(*first);

    if((iPos < 1)||(iPos > iCount ))//filter
    {
        printf("Invalid Position\n");
        return;

    }
    if(iPos==1)
    {
        Deletefirst(first);
    }
    else if(iPos==iCount)
    {
        DeleteLast(first);

    }
    else
    {
        
    }
}
int main()
{
  PNODE head=NULL;  
   int iRet=0;

    Insertfirst(&head,51);
     Insertfirst(&head,21);
      Insertfirst(&head,11);

      InsertLast(&head,101);
       InsertLast(&head,111);
        InsertLast(&head,121);
         InsertLast(&head,151);
    
      Display(head);
    
        Deletefirst(&head);
        Display(head);
        iRet=Count(head);
        printf("Number of elements are : %d\n",iRet);
    

        DeleteLast(&head);
         Display(head);
        iRet=Count(head);
        printf("Number of elements are : %d\n",iRet);

        InsertAtPos(&head,105,4);
         Display(head);
        iRet=Count(head);
        printf("Number of elements are : %d\n",iRet);
        

    return 0;

}
