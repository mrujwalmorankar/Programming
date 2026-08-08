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
       while (first !=NULL)
       {
          printf("| %d | -> ",first->data);
          first=first->next;
       }
       
       printf("NULL\n");
    }

    int Count(PNODE first)
    {
        int iCount=0;
     
        while (first !=NULL)
       {
          iCount++;
          first=first->next;
       }
        return iCount;
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
            *first=newn;//first pointer cha data newn  
       }

    }

   

int main()
{
    PNODE head =NULL;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);


    Display(head);

    int iRet=0;
    iRet=Count(head);
   
     printf("Numbers of nodes are :%d\n",iRet);
     
   
    return 0;
}