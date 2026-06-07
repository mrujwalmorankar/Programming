#include <iostream>
using namespace std;

#pragma pack(1)//padding of
class ArrayX
{
  public :
     int *Arr;
     int iSize;
};

int main()
{
  ArrayX aobj;//static object

  cout<<sizeof(aobj)<<endl;//16

  return 0;
}