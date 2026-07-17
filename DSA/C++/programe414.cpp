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
    SinglyLL sobj;

    int iChoice=0;
    int iValue=0;
    int iRet=0;
    int iPosition=0;


    while(1)
    {
      cout<<"----------------------------\n";  
      cout<<"Enter Your Choice :\n";
      cout<<"----------------------------\n";  

      cout<<" 1: Insert node at first Position \n ";
      cout<<" 2: Insert node at last Position \n ";
      cout<<" 3: Insert node at given Position \n ";
      cout<<" 4: Delete node at first Position \n ";
      cout<<" 5: Delete node at last Position \n ";
      cout<<" 6: Delete node at given Position \n ";
      cout<<" 7: Display the elements \n ";
      cout<<" 8: Count the no of elements \n ";
      cout<<" 9: Terminate the Application \n ";
 cout<<"----------------------------------------------\n";
      cin>>iChoice;
      
      switch(iChoice)
      {
        case 1:
           cout<<"Enter the Value : ";
           cin>>iValue;
           sobj.InsertFirst(iValue);

           break;

         case 2:
           cout<<"Enter the Value : ";
           cin>>iValue;
           sobj.InsertLast(iValue);

           break;  

         case 3:
           cout<<"Enter the Value : ";
           cin>>iValue;
           cout<<"Enter the Position : ";
            cin>>iPosition;
           sobj.InsertAtPos(iValue,iPosition);
           
           break;    

           case 4:
           sobj.DeleteFirst();
    
           break;
           
           case 5:
           sobj.DeleteLast();
    
           break;

           case 6:
           cout<<"Enter the Position : ";
            cin>>iPosition;
           sobj.DeleteAtPos(iPosition);

           case 7:
            cout<<"Elements of Linklist Are : ";
            sobj.Display();

            break;

            case 8:
            iRet=sobj.Count();
            cout<<"No of Elements are :"<<iRet<<"\n";
    
             break;

            case 9:
            cout<<"Thanku U for Using Marvellous Infosystems Applications \n";
             break;

             default:
              cout<<"Invalid Choice\n";
    
      }
      

    }
    


    return 0;
}