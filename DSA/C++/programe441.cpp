#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

#pragma pack(1)
class  DoublyCLL
{
private:
    PNODE first;
    PNODE last;
    int iCount;

public:
   DoublyCLL ();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);

    void DeleteFirst();
    void DeleteLast();

    void InsertAtPos(int iNo,int iPos);
    void DeleteAtPos(int iPos);
};
/*
// Constructor
DoublyCLL::DoublyCLL()
{
    first = NULL;
    last = NULL;
    iCount = 0;
}

void DoublyCLL::Display()
{
    PNODE temp = NULL;

    if((first == NULL) && (last == NULL))
    {
        cout<<"Linked List is Empty\n";
        return;
    }

    temp = first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }while(temp != first);

    cout<<"\n";
}

int DoublyCLL::Count()
{
    return iCount;
}

void DoublyCLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    last->next = first;
    iCount++;
}

void DoublyCLL::InsertLast(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((first == NULL) && (last == NULL))
    {
        first = newn;
        last = newn;
    }
    else
    {
        last->next = newn;
        last = newn;
    }

    last->next = first;
    iCount++;
}

void DoublyCLL::DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;

        first = first->next;
        delete temp;

        last->next = first;
    }

    iCount--;
}

void DoublyCLL::DeleteLast()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
        first = NULL;
        last = NULL;
    }
    else
    {
        PNODE temp = first;

        while(temp->next != last)
        {
            temp = temp->next;
        }

        delete last;
        last = temp;
        last->next = first;
    }

    iCount--;
}

void DoublyCLL::InsertAtPos(int iNo,int iPos)
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE newn = new NODE;
        PNODE temp = first;

        newn->data = iNo;
        newn->next = NULL;

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

void DoublyCLL::DeleteAtPos(int iPos)
{
    if((iPos < 1) || (iPos > iCount))
    {
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = first;
        PNODE target = NULL;

        for(int i = 1; i < iPos-1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;

        delete target;

        iCount--;
    }
}*/

int main()
{
    DoublyCLL dobj;
/*
dobj.InsertFirst(51);
dobj.InsertFirst(21);
dobj.InsertFirst(11);

dobj.InsertLast(101);
dobj.InsertLast(111);
dobj.InsertLast(121);

    cout<<"Linked List :\n";
dobj.Display();

    cout<<"Node Count : "<<dobj.Count()<<endl;

dobj.DeleteFirst();
    cout<<"\nAfter DeleteFirst:\n";
dobj.Display();

dobj.DeleteLast();
    cout<<"\nAfter DeleteLast:\n";
dobj.Display();

dobj.InsertAtPos(75,3);
    cout<<"\nAfter InsertAtPos:\n";
dobj.Display();

dobj.DeleteAtPos(3);
    cout<<"\nAfter DeleteAtPos:\n";
dobj.Display();

    cout<<"\nFinal Count : "<<dobj.Count()<<endl;

    return 0;*/
}