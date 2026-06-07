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
  ArrayX aobj(5);//parameter dila 

  cout<<sizeof(aobj)<<endl;//16

  return 0;
}