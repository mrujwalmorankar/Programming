//WAP to print numbers from N down to 1 in reverse order...

import java.util.Scanner;

class LogicX
{
   void sumEven(int iNo)
    {
        int iCnt = 0;
        

        for(iCnt = iNo; iCnt >= 1; iCnt--)
        {            
                 System.out.println(iCnt);
        }

    }
}

public class Q2
{
    public static void main(String A[])
    {


        Scanner sobj = new Scanner(System.in);

         int iNo=0;
      

        System.out.print("Enter Number : ");
         iNo = sobj.nextInt();


        LogicX lobj = new LogicX();

        

          lobj.sumEven(iNo);

    }
}
