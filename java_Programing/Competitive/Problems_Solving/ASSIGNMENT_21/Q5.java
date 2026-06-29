//WAP to print all numbers from 1 to N that are Divisible by both 2 And 3.
import java.util.Scanner;

class Q5
 {
   public static void main(String A[] )
    {
      int iValue=0;
      
        Scanner sobj=new Scanner(System.in);
      
        System.out.println("Enter Number :");
        iValue=sobj.nextInt();


       LogicX lobj=new LogicX();

       lobj.PrintDivisible(iValue);
    }   
 }

 class LogicX
 {
   

         void PrintDivisible(int iNo)
         {
               int iCnt = 0;

            System.out.println("Numbers divisible by both 2 and 3 are:");

            for(iCnt = 1; iCnt <= iNo; iCnt++)
            {
                  if((iCnt % 2 == 0) && (iCnt % 3 == 0))
                  {
                     System.out.println(iCnt);
                  }  
                  else
                  {
                      System.out.println("In this range  no are not divsible by");
                  }
            }
      
         }
         
 }      