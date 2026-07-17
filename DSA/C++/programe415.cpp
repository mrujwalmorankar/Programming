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
typedef struct node** PPNODE;

class DoublyLL
{
private:
    PNODE first;
    int iCount;

public:
    DoublyLL();

    void Display();
    int Count();

    void InsertFirst(int);
    void InsertLast(int);

    void DeleteFirst();
    void DeleteLast();

    void InsertAtPos(int,int);
    void DeleteAtPos(int);
};

DoublyLL::DoublyLL()
{
    first = NULL;
    iCount = 0;
}


void DoublyLL::Display()
{
    PNODE temp = first;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<" | <=> ";
        temp = temp->next;
    }

    cout<<"NULL\n";
}


int DoublyLL::Count()
{
    return iCount;
}


void DoublyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        newn->next = first;
        first->prev = newn;
        first = newn;
    }

    iCount++;
}


void DoublyLL::InsertLast(int iNo)
{
    PNODE newn = new NODE;
    PNODE temp = first;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(first == NULL)
    {
        first = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->next = newn;
        newn->prev = temp;
    }

    iCount++;
}


void DoublyLL::DeleteFirst()
{
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
        PNODE temp = first;

        first = first->next;
        first->prev = NULL;

        delete temp;
    }

    iCount--;
}

void DoublyLL::DeleteLast()
{
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
        PNODE temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        temp->prev->next = NULL;
        delete temp;
    }

    iCount--;
}


void DoublyLL::InsertAtPos(int iNo, int iPos)
{
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
        PNODE newn = new NODE;
        PNODE temp = first;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(int i=1;i<iPos-1;i++)
        {
            temp = temp->next;
        }

        newn->next = temp->next;
        newn->prev = temp;

        temp->next->prev = newn;
        temp->next = newn;

        iCount++;
    }
}

void DoublyLL::DeleteAtPos(int iPos)
{
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
        PNODE temp = first;

        for(int i=1;i<iPos-1;i++)
        {
            temp = temp->next;
        }

        PNODE target = temp->next;

        temp->next = target->next;
        target->next->prev = temp;

        delete target;

        iCount--;
    }
}

int main()
{
    DoublyLL dobj;

    int iChoice=0;
    int iValue=0;
    int iRet=0;
    int iPosition=0;

    while(1)
    {
        cout<<"\n----------------------------\n";
        cout<<"Doubly Linear Linked List\n";
        cout<<"----------------------------\n";

        cout<<"1 : Insert First\n";
        cout<<"2 : Insert Last\n";
        cout<<"3 : Insert At Position\n";
        cout<<"4 : Delete First\n";
        cout<<"5 : Delete Last\n";
        cout<<"6 : Delete At Position\n";
        cout<<"7 : Display\n";
        cout<<"8 : Count\n";
        cout<<"9 : Exit\n";

        cout<<"Enter your choice : ";
        cin>>iChoice;

        switch(iChoice)
        {
            case 1:
                cout<<"Enter Value : ";
                cin>>iValue;
                dobj.InsertFirst(iValue);
                break;

            case 2:
                cout<<"Enter Value : ";
                cin>>iValue;
                dobj.InsertLast(iValue);
                break;

            case 3:
                cout<<"Enter Value : ";
                cin>>iValue;
                cout<<"Enter Position : ";
                cin>>iPosition;
                dobj.InsertAtPos(iValue,iPosition);
                break;

            case 4:
                dobj.DeleteFirst();
                break;

            case 5:
                dobj.DeleteLast();
                break;

            case 6:
                cout<<"Enter Position : ";
                cin>>iPosition;
                dobj.DeleteAtPos(iPosition);
                break;

            case 7:
                dobj.Display();
                break;

            case 8:
                iRet = dobj.Count();
                cout<<"Number of nodes : "<<iRet<<endl;
                break;

            case 9:
                cout<<"Thank You for Using Marvellous Infosystems Applications\n";
                return 0;

            default:
                cout<<"Invalid Choice\n";
        }
    }

    return 0;
}