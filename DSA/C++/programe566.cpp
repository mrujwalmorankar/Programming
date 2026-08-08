
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
   void Accept();
   void Display();

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
void Searching ::Accept ()
{
   int i=0;
    cout<<"Enter the Elements : \n";

    for(i=0;i<iSize;i++)
    {
      cin>>Arr[i];

    }

}
void Searching ::Display ()
{
   int i=0;
    cout<<"Elements Of the Array Are:\n";

    for(i=0;i<iSize;i++)
    {
      cout<<Arr[i]<<"\n";

    }
    
}
int main()
{
   Searching sobj(5);
   sobj.Accept();
   sobj.Display();
   
 return 0;
}
