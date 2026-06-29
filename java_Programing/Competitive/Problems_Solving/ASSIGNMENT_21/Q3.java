//WAP to display all factors of a given no .
import java.util.Scanner;

class Q3
 {
   public static void main(String A[] )
    {
      int iValue=0;
      
        Scanner sobj=new Scanner(System.in);
      
        System.out.println("Enter Number :");
        iValue=sobj.nextInt();


       LogicXx  lobj=new LogicXx();

       lobj.Factorial(iValue);
    }   
 }

 class LogicXx
 {
   
    void Factorial(int iNo)
      
    {
        int iCnt=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
           if(iNo %iCnt==0)
            {
             System.err.println(iCnt);  
            }
           
         }
    }
}  
