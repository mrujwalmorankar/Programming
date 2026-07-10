#include<stdio.h>
#include<stdlib.h>


struct node 
{
    int data ;

    struct node*next;
};

typedef  struct node    NODE;
typedef  struct node*   PNODE;
typedef  struct node**  PPNODE;

    void Display(PNODE first)
    {

    }

    int Count(PNODE first)
    {
        return 0;
    }


    void InsertFirst(PPNODE first,int iNo)
    {
       PNODE newn=NULL;
       newn=(PNODE)malloc(sizeof(NODE));

       newn->data=iNo;//newn pointer chya data mdhe ino chi value taka
       newn->next=NULL; //newn pointer chya next address mdhe kahich nhiye

       if(*first==NULL)//LL is empty
       {
            *first=newn; //*first pointer mdhe newn cha address 
       }
       else //LL contains at least 1 Node
       {
            newn->next=*first;//newn pointer nntr cha address first pointer mdhe save kra
            *first=newn;//first pointer 
       }

    }

    void InsertLast(PPNODE first,int iNo)
    {
      
       PNODE newn=NULL;
       newn=(PNODE)malloc(sizeof(NODE));

       newn->data=iNo;//newn pointer chya data mdhe ino chi value taka
       newn->next=NULL; //newn pointer chya next address mdhe kahich nhiye

       if(*first==NULL)//LL is empty
       {
            *first=newn; //*first pointer mdhe newn cha address 
       }
       else
       {

       }
    }



    void DeleteFirst(PPNODE first)
    {

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
    PNODE head =NULL;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);


    return 0;
}