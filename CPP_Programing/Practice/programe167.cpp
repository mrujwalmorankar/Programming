#include <iostream>
using namespace std;

#pragma pack(1)//padding off
class ArrayX
{
  private :
     int *Arr;
     int iSize;

      public:
        ArrayX(int X=5)//parameterized constructor with default argument
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
  ArrayX *aobj1=new ArrayX();//parameterized constructor....
  ArrayX *aobj2=new ArrayX(15);//Parametrized Constructor....    

//(Function call)

delete aobj1;

delete aobj2;

  return 0;
}