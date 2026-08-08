
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

   bool LinearSearch(int iNo);
   bool BidirectionalSearch(int iNo);

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
   bool Searching ::LinearSearch (int iNo)
   {
      int i=0;
    bool bFlag=false;

    for(i=0;i<iSize;i++)
    {
       if(iNo==Arr[i])
       {
         bFlag=true;
         break;
       }
    }
    return bFlag;
    
   }
   bool Searching ::BidirectionalSearch(int iNo)
   {
      int iStart=0;
      int iEnd=0;
      bool bFlag=false;

      iEnd=iSize-1;

      while(iStart<=iEnd)
      {
    
         if(Arr[iStart]==iNo||Arr[iEnd]==iNo)
         {
            bFlag=true;
            break;
         }

         iStart++;
         iEnd--;
      }
      return bFlag;
      

   }


    

int main()
{
   Searching sobj(5);

   sobj.Accept();
   sobj.Display();
   
   if(sobj.LinearSearch(30)==true)
   {
      cout<<"Element Is present \n ";

   }
   else
   {
      cout<<"There is No such element";
   }


 
     if(sobj.BidirectionalSearch(30)==true)
   {
      cout<<"Element Is present ";

   }
   else
   {
      cout<<"There is No such element";
   }
 return 0;
}
