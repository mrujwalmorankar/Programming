//WAP to count how many even and how many odd numbrs are present between 1 and N.
import java.util.Scanner;

class Q2
 {
   public static void main(String A[] )
    {
      int iValue=0;
      
        Scanner sobj=new Scanner(System.in);
      
        System.out.println("Enter Number :");
        iValue=sobj.nextInt();


       Logic lobj=new Logic();

       lobj.CountEvenOdd(iValue);
    }   
 }

 class Logic
 {
    void CountEvenOdd(int iNo)
    {   
        int iCount1=0;
        int iCount2=0;
        int iCnt=0;

        for(iCnt=1;iCnt<=iNo;iCnt++)
        {
          if(iCnt%2==0)
           {
              iCount1++;
           }
           
          else
           {
              iCount2++;
           }
            
        }
        System.out.println("Even no is :"+iCount1);
        System.out.println("ODD no is :"+iCount2);
        
    }
 }
