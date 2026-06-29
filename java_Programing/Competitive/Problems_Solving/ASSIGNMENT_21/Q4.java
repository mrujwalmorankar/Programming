//WAP to Count total no  of factors of a given no .
import java.util.Scanner;

class Q4
 {
   public static void main(String A[] )
    {
      int iValue=0;
      
        Scanner sobj=new Scanner(System.in);
      
        System.out.println("Enter Number :");
        iValue=sobj.nextInt();


       LogicX lobj=new LogicX();

       lobj.Factorial(iValue);
    }   
 }

 class LogicX
 {
   
    void Factorial(int iNo)
      
    {
        int iCnt=0;
        int iCount=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
           if(iNo %iCnt==0)
            {
             System.err.println(iCnt);
              iCount++;
            }
      
         }
         System.out.println("Total Factor of Given no is :"+iCount);
    }
}  
