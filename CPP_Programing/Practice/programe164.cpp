#include <iostream>
using namespace std;

#pragma pack(1)//padding off
class ArrayX
{
  private :
     int *Arr;
     int iSize;

      public:
        ArrayX(int X)
        {
           iSize=X;
           Arr=new int[iSize];
        }

        ~ArrayX()
        {
          
           delete []Arr;
        }
};

int main()
{
  ArrayX *aobj1=new ArrayX(5);

//Logic  (Function call)

cout<<aobj1->iSize<<"\n";//error

aobj1->iSize=0;//isssue//error
aobj1->Arr=NULL;//issue//error

delete aobj1;

  return 0;
}