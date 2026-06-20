//WAP to print all even numbers up to n

import java.util.Scanner;


class LogicX
{
    void PrintEven(int NO)
    {  int iCnt = 0;

        for(iCnt = 1; iCnt <= NO; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                System.out.println(iCnt);
            }
        }
        
    }
}

public class Q2
 {
    public static void main(String A[] )
    {
     
        int iValue =0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter  Number : ");
        iValue=sobj.nextInt();


         LogicX lobj=new LogicX();
         
         lobj.PrintEven(iValue);



    }

    
}
