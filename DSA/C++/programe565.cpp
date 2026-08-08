
#include<iostream>
using namespace std;



class Searching 
{
private:
   int * Arr;
   int iSize;
   
public:
   Searching (int iNo  );
   ~Searching ();

};

Searching ::Searching (int iNo)
{
  iSize=iNo;
  Arr=new int[iSize];//Dynamic memory Allocation for CPP
}

Searching ::~Searching ()
{
   delete[]Arr;//for free memory 
}

int main()
{
   Searching sobj(5);
   
 return 0;
}
