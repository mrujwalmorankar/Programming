//Generic Stack

#include<iostream>
using namespace std;

#pragma pack(1)

template<class T>
struct node
{
    T data;
    struct node<T> *next;
};

template<class T>
class Stack
{
private:
    struct node<T> *first;
    int iCount;

public:
    Stack();
    void Push(T iNo);
    T Pop();
    T Peep();
    void Display();
    int Count();
};

template<class T>
Stack<T>::Stack()
{
    this->first = NULL;
    this->iCount = 0;
}

template<class T>
void Stack<T>::Push(T iNo)
{
    struct node<T> *newn = new struct node<T>();

    newn->data = iNo;
    newn->next = first;
    first = newn;

    iCount++;
}

template<class T>
T Stack<T>::Pop()
{
    T iValue;
    struct node<T> *temp = NULL;

    if(first == NULL)
    {
        cout << "Stack is Empty\n";
        return T();
    }
    else
    {
        iValue = first->data;
        temp = first;

        first = first->next;

        delete temp;

        iCount--;

        return iValue;
    }
}

template<class T>
T Stack<T>::Peep()
{
    T iValue;

    if(first == NULL)
    {
        cout << "Stack is Empty\n";
        return T();
    }
    else
    {
        iValue = first->data;
        return iValue;
    }
}

template<class T>
void Stack<T>::Display()
{
    struct node<T> *temp = NULL;

    temp = first;

    while(temp != NULL)
    {
        cout << "| " << temp->data << " |\n";
        temp = temp->next;
    }
}

template<class T>
int Stack<T>::Count()
{
    return iCount;
}

int main()
{
    Stack<int> sobj;
    int iRet = 0;

    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);

    sobj.Display();

    iRet = sobj.Count();
    cout << "Elements of the Stack are : " << iRet << "\n";

    iRet = sobj.Pop();
    cout << "Popped Element is : " << iRet << "\n";

    sobj.Display();

    iRet = sobj.Count();
    cout << "Elements of the Stack are : " << iRet << "\n";

    iRet = sobj.Peep();
    cout << "Peeped Element is : " << iRet << "\n";

    sobj.Display();

    iRet = sobj.Count();
    cout << "Elements of the Stack are : " << iRet << "\n";

    return 0;
}