//WAP to check whether a given year is a leap year or not 

import java.util.Scanner;




class Logic
{
   
    void CheckLeapYear(int iNO) 
   { 
     if(iNO %4 ==0 ||iNO %400 ==0)
     {
        System.out.println("This year is Leap Year");

     }
     else
     {
        System.out.println("This year is  not  Leap Year");
     }
     
   }
}
class Q1
{
    public static void main(String A[] )
     {
        int iValue=0;
      
       
      Scanner sobj=new Scanner(System.in);

       System.out.println("Enter Year :");
        iValue=sobj.nextInt();

       Logic lobj=new Logic() ;

       lobj.CheckLeapYear(iValue);
    }
}