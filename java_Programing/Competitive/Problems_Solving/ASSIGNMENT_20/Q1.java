//WAP to find the sum of all even numbers up to N

import java.util.Scanner;

class LogicX
{
   void sumEven(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt%2==0)
            {
               iSum=iSum +iCnt;

            }
         
        
        }

        System.out.println("Sum is :" +iSum);
   
    }
}

public class Q1
{
    public static void main(String A[])
    {


        Scanner sobj = new Scanner(System.in);

         int iNo=0;
      

        System.out.print("Enter Number : ");
         iNo = sobj.nextInt();


        LogicX lobj = new LogicX();

        int iRet=0;

          lobj.sumEven(iNo);

    }
}
