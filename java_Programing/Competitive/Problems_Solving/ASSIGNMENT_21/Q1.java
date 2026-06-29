//WAP to calculate the product of digits of a number ....
import java.util.Scanner;

class Q1 
 {
   public static void main(String A[] )
    {
      int iValue=0;
      
        Scanner sobj=new Scanner(System.in);
      
        System.out.println("Enter Number :");
        iValue=sobj.nextInt();


       Logic lobj=new Logic();

       lobj.productofDigits(iValue);
    }   
 }

 class Logic
 {
    void productofDigits(int iNo)
    {
       int iDigit = 0;
        int iProduct = 1;

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iProduct = iProduct * iDigit;
            iNo = iNo / 10;
        }
        System.out.println("Product of Digits of Number is :"+iProduct);
    }
 }
