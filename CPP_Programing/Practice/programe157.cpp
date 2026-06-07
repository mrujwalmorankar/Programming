#include <iostream>
using namespace std;

#pragma pack(1)//padding of
class ArrayX
{
  public :
     int *Arr;
     int iSize;

        ArrayX()//Default constructor 
        {

        }
        ArrayX(int X)//parameterized constructor 
        {

        }
};

int main()
{
  ArrayX aobj1;//default la 
  ArrayX aobj2(5);//parameter dila//parameterized 

  cout<<sizeof(aobj1)<<endl;//16

  return 0;
}