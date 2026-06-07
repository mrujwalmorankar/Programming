
#include<iostream>
using namespace std;

int main()
{
  int *Brr=NULL;
  int iLength=0;
  int iCnt=0;


  cout<<"Enter the no of Elements :";
  cin>>iLength;

  Brr=new int[iLength];//Allocating dynamic memory

   cout<<"Enter the  Elements :";
  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    cin>>Brr[iCnt];
  }
   cout<<"Elements of the Array are  :\n";
    for(iCnt=0;iCnt<iLength;iCnt++)
  {
    cout<<Brr[iCnt]<<endl;
  }
   delete[]Brr;


  return 0;
}