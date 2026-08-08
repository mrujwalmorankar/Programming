//Binary Search tree
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)

struct node
{
    int data;
    struct node *lchild;
    struct node *rchild;
};


typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

int Count(PNODE first)
{
   static int iCount=0;

   if(first!=NULL)
   {
     iCount++;
    Count(first->lchild);
    Count(first->rchild);
    
   }
   return iCount;
   
}

//L D R
void Inorder(PNODE first)
{
  if(first !=NULL)
  {
     Inorder(first->lchild);
       
      printf("%d\n",first->data);
      
     Inorder(first->rchild);


  }  
}

void Insert(PPNODE first,int iNo)
{
  PNODE newn =NULL;
  PNODE temp=NULL;
  
  newn=(PNODE)malloc (sizeof(NODE));

  newn->data=iNo;
  newn->lchild=NULL;
  newn->rchild=NULL;

     if(*first==NULL)
     {
        *first=newn;
     }
     else
      {
        temp=*first;
                
        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild==NULL)
                {
                 temp->rchild =newn;
                   break;
                }
                temp=temp->rchild;

            }
            else if(iNo < temp->data)
            {
              if(temp->lchild==NULL)
                {
                 temp->lchild =newn;
                   break;
                }
                temp=temp->lchild;
            
            }
            else if(iNo==temp->data)
            {
               printf("Unable to Insert as Element is Duplicate\n");
               free(newn);
               break;
            }

        }    

      }
      
}

int main()
{
  int iRet=0;
  PNODE head=NULL;
   
  Insert(&head,11);
    
  Insert(&head,5);

  Insert(&head,21);

  Insert(&head,4);

  Insert(&head,7);

  Insert(&head,15);


  printf("Inorder Display :\n");
  Inorder(head);


   
  
     iRet=Count(head);  
     printf("Count Of Nodes Are : %d\n",iRet);
     
    return 0;
}
