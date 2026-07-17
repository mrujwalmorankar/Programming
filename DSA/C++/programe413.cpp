
#include<iostream>
using namespace std;

#pragma pack(1)

struct  node
{
  int data;
  struct node * next;
  struct node* prev;//&&
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

     void Display() ;
      
     int Count();
         

        void InsertFirst(int iNo);   
        void InsertLast(int  iNo);
        void DeleteFirst();
        void DeleteLast();
        void InsertAtPos(int iNo,int iPos);                          
        void DeleteAtPos(int iNo,int iPos);
        

        


};

    DoublyLL ::   DoublyLL()
     {
        this->first=NULL;
           
        this->iCount=0;
        cout<<"Inside Constructor"<<endl;
     }

       int DoublyLL :: Count()
         {
            return this->iCount;
         }
         
void DoublyLL :: InsertFirst(int iNo)
{

}   
void DoublyLL :: InsertLast(int  iNo)
{

}
void DoublyLL ::DeleteFirst()
{

}
void DoublyLL:: DeleteLast()
{

}
void DoublyLL ::InsertAtPos(int iNo,int iPos)
{

}                          
void DoublyLL ::DeleteAtPos(int iNo,int iPos)
{

}



int main()
{
  
   DoublyLL dobj;

   


  return 0;
}

