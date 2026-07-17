#include<iostream>
using namespace std;

#pragma pack(1)

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
private:
    PNODE first;
    int iCount;

public:
    SinglyLL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);

    void DeleteFirst();
    void DeleteLast();

    void InsertAtPos(int iNo, int iPos);
    void DeleteAtPos(int iPos);
};

// Constructor
SinglyLL::SinglyLL()
{
    first = NULL;
    iCount = 0;
}

// Display
void SinglyLL::Display()
{
    PNODE temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;
    }

    cout<<"NULL"<<endl;
}

// Count
int SinglyLL::Count()
{
    return iCount;
}

// Insert First
void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first = newn;
    }

    iCount++;
}

// Insert Last
void SinglyLL::InsertLast(int iNo)
{
    PNODE newn = new NODE;
    PNODE temp = NULL;

    newn->data = iNo;
    newn->next = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
    }

    iCount++;
}

// Delete First
void SinglyLL::DeleteFirst()
{
    PNODE temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;
        first = first->next;
        delete temp;
    }

    iCount--;
}

// Delete Last
void SinglyLL::DeleteLast()
{
    PNODE temp = NULL;

    if(first == NULL)
    {
        return;
    }
    else if(first->next == NULL)
    {
        delete first;
        first = NULL;
    }
    else
    {
        temp = first;

        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }

        delete temp->next;
        temp->next = NULL;
    }

    iCount--;
}

// Insert At Position
void SinglyLL::InsertAtPos(int iNo, int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid Position\n";
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
        newn = new NODE;

        newn->data = iNo;
        newn->next = NULL;

        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        temp->next = newn;

        iCount++;
    }
}

// Delete At Position
void SinglyLL::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;
    PNODE target = NULL;
    int i = 0;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid Position\n";
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
        temp = first;

        for(i = 1; i < iPos - 1; i++)
        {
            temp = temp->next;
        }

        target = temp->next;
        temp->next = target->next;

        delete target;

        iCount--;
    }
}

int main()
{
    int iRet = 0;

    SinglyLL sobj;

    sobj.Display();

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);
    sobj.Display();

    iRet = sobj.Count();
    cout<<"No of Elements are : "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);
    sobj.Display();

    iRet = sobj.Count();
    cout<<"No of Elements are : "<<iRet<<endl;

    sobj.DeleteFirst();
    sobj.Display();

    iRet = sobj.Count();
    cout<<"No of Elements are : "<<iRet<<endl;

    sobj.DeleteLast();
    sobj.Display();

    iRet = sobj.Count();
    cout<<"No of Elements are : "<<iRet<<endl;

    sobj.InsertAtPos(105,4);
    sobj.Display();

    iRet = sobj.Count();
    cout<<"No of Elements are : "<<iRet<<endl;

   sobj.DeleteAtPos(4);
    sobj.Display();

    iRet = sobj.Count();
    cout<<"No of Elements are : "<<iRet<<endl;

    return 0;
}