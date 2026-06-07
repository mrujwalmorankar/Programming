#include <iostream>
using namespace std;

#pragma pack(1)//padding off
class ArrayX
{
  private :
     int *Arr;
     int iSize;
     int iCnt=0;

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

        void Accept()
        {
          int iCnt=0;
          cout<<"Enter the Elements :\n";
         
          for(iCnt=0;iCnt<iSize<iCnt;iCnt++)
          {
            cin>>Arr[iCnt];
          }

           void Display()
        {
          int iCnt=0;
          
          cout<<" Elements oF the Array are :\n";
         
          for(iCnt=0;iCnt<iSize<iCnt;iCnt++)
          {
            cout<<Arr[iCnt]<<endl;
          }

        }
};

int main()
{
  ArrayX *aobj=NULL;

  int iLength=0;

  cout<<"Enter the no of Elemnets :\n";
  cin>>iLength;

  aobj=new ArrayX();

  aobj->Accept();
  aobj->Display();





  return 0;
}