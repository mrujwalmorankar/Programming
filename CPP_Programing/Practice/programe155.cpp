#include <iostream>
using namespace std;

#pragma pack(1)//padding of
class ArrayX
{
  public :
     int *Arr;
     int iSize;

     ArrayX(int X)//parameterized constructor 
     {

     }
};

int main()
{
  ArrayX aobj;//error

  cout<<sizeof(aobj)<<endl;//16

  return 0;
}