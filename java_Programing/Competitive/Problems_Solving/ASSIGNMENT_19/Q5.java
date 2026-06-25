//WAP to to calculate the power of a number using loops .

import java.util.Scanner;

class LogicX
{
    int Power(int ibase, int ipow)
    {
        int iCnt = 0;
        int iresult = 1;

        for(iCnt = 1; iCnt <= ipow; iCnt++)
        {
            iresult = iresult * ibase;
        }

        return iresult;
    }
}

public class Q5
{
    public static void main(String A[])
    {


        Scanner sobj = new Scanner(System.in);

         int iNo=0;
         int iPower=0;

        System.out.print("Enter Base Number : ");
         iNo = sobj.nextInt();

        System.out.print("Enter Power : ");
         iPower = sobj.nextInt();

        LogicX lobj = new LogicX();

        int iRet=0;

         iRet = lobj.Power(iNo, iPower);

        System.out.println("Result is : " + iRet);
    }
}