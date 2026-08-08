#include<iostream>
using namespace std;


#pragma pack(1)
struct node
{
    int data;
    struct node  *next ;
};


class Queue
{
  private :
   struct node * first;
   int iCount;     
 
  public:
    Queue();
    void EnQueue(int iNo);//InsertLast
     int DeQueue();        //DeleteFirst
    void Display();
    int Count();
      
}; 

Queue  :: Queue ()
{
     this->first =NULL;
     this ->iCount=0;

}

void Queue  :: EnQueue(int iNo)
{
  

    struct node *newn = new struct node();
    struct node *temp  = NULL;


    newn->data = iNo;
    newn->next = NULL;

    if(first==NULL)
    {
        first = newn;
    }
    else
    {
        temp=first;

        while(temp->next!=NULL)
        {
          temp=temp->next;
        }

        temp->next=newn;
    }
    iCount++;
}


int  Queue  ::DeQueue() 
{ 
    int iValue =0;
 
    struct node * temp =NULL;



   if(first==NULL)
   {
    cout<<"Queue is Empty\n";
    return -1;
   }  
    else
    {
        iValue=first->data;
        temp=first;

        first=first->next;

        delete(temp);

        iCount--;
        return iValue;
    }     
    
}       

void Queue :: Display()
{
    struct node *temp =NULL;

    temp =first;

    while(temp !=NULL)
    {
        cout<<"| "<<temp->data<<" |\n";
        temp=temp->next;
    }
}
int  Queue ::Count()
{return iCount;}




int main()
{
Queue qobj;
 int iRet=0;

qobj.EnQueue(11);
qobj.EnQueue(21);
qobj.EnQueue(101);
qobj.EnQueue(51);


qobj.Display();
iRet=qobj.Count();

cout<<"Elemets of the Queue are :"<<iRet<<"\n";


iRet=qobj.DeQueue();
cout<<"Remove  Element is:"<<iRet<<"\n";

qobj.Display();
iRet=qobj.Count();

cout<<"Elemets of the Queue are :"<<iRet<<"\n";




qobj.Display();
iRet=qobj.Count();

cout<<"Elemets of the Queue are :"<<iRet<<"\n";



    return 0;
}