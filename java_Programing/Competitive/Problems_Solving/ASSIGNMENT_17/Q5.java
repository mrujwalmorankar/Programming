//WAP to print the multiplication table  of a number..
import java.util.Scanner;


class Table
{
  void printTable(int iNO)
  {
      int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(iNO + " * " + iCnt + " = " + (iNO * iCnt));
        }
  }    
}




public class Q5
{
    public static void main(String A[])
     {
        int iValue1=0;
    

         Scanner sobj=new Scanner(System.in);
         
         Table tobj =new Table();

          System.out.println("Enter first no :");
          iValue1=sobj.nextInt();

          
     
        
         tobj.printTable(iValue1);
    }
}
