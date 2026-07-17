
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
     SinglyLL()
     {
        this->first=NULL;
           
        this->iCount=0;
        cout<<"Inside Constructor"<<endl;
     }

         void Display() 
        {
            
        }

         int iCount()
         {
            return this->iCount;
         }

        void InsertFirst(int iNo)
         {
      
         }
                  
        void InsertLast(int  iNo)
        {                    }

         void DeleteFirst()
         {

         }              

         void DeleteLast()
         {          }

        void InsertAtPos(int iPos)
        {
        
         }                       
        void DeleteAtPos(int iPos)
        {

        }


};

int main()
{
  
    SinglyLL sobj;



  return 0;
}

