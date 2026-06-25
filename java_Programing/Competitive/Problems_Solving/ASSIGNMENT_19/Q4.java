//WAP to print each digit of a number Seperately

import java.util.Scanner;




class Logic
{
   
   void CheckDivisible(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        System.out.println("Separated Digit is : " + iDigit);
        iNo = iNo / 10;
    }
}
    }


class Q4
{
    public static void main(String A[] )
     {
        int iValue=0;
      
       
      Scanner sobj=new Scanner(System.in);

       System.out.println("Enter Number  :");
        iValue=sobj.nextInt();

       Logic lobj=new Logic() ;

       lobj.CheckDivisible(iValue);
    }
}