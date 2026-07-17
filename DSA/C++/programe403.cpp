
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
  private:    
     PNODE first;
     int iCount;

  public:  
     SinglyLL();

     void Display() ;
      
     int Count();
         

        void InsertFirst(int iNo);   
        void InsertLast(int  iNo);
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int iNo,int iPos);                          
        void DeleteAtPos(int iNo,int iPos);
        

        


};

    SinglyLL :: SinglyLL()
     {
        this->first=NULL;
           
        this->iCount=0;
        cout<<"Inside Constructor"<<endl;
     }

       int SinglyLL :: Count()
         {
            return this->iCount;
         }
         
void SinglyLL :: InsertFirst(int iNo)
{

}   
void SinglyLL :: InsertLast(int  iNo)
{

}
void SinglyLL ::DeleteFirst()
{

}
void SinglyLL :: DeleteLast()
{

}
void SinglyLL ::InsertAtPos(int iNo,int iPos)
{

}                          
void SinglyLL ::DeleteAtPos(int iNo,int iPos)
{

}



int main()
{
  
    SinglyLL sobj;



  return 0;
}

