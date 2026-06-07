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
          cout<<"Inside Constructor"<<endl;
           iSize=X;//Characteristic Initialization
           Arr=new int[iSize];//Resource allocation
        }

        ~ArrayX()//Destructor
        {
           cout<<"Inside Distructor"<<endl;
           delete []Arr;//Resource Deallocation
        }
};

int main()
{
  //Static memory allocation  for object
  //ArrayX aobj1(5);//parameterized sathi
  
  ArrayX *aobj1=new ArrayX(5);//Dynamically created object

  


  return 0;
}