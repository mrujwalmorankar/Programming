#include<iostream>
using namespace std;

#pragma pack(1)

struct  node
{
  int data;
  struct node * next;

};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


class SinglyLL
{
  public :    
     PNODE first;
     int iCount;



     SinglyLL()
     {
        this->first=NULL;
           
        this->iCount=0;



        cout<<"Inside Constructor"<<endl;
     }
};

int main()
{
  
         SinglyLL sobj;
//5 NODES

sobj.first=NULL;//drawbacks
sobj.iCount=15;//drawbacks

  return 0;
}

