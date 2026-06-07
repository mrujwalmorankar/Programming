#include <iostream>
using namespace std;


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