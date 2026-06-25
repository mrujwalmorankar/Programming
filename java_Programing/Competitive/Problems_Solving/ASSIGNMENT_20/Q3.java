//WAP  to check whether a number is a perfect number or not

import java.util.Scanner;

class LogicX
{
    void CheckPerfect(int iNo)
    {
        int iCnt = 0;
        int iSum = 0;

        for(iCnt = 1; iCnt <= iNo / 2; iCnt++)
        {
            if(iNo % iCnt == 0)
            {
                iSum = iSum + iCnt;
            }
        }

        if(iSum == iNo)
        {
            System.out.println("Perfect Number");
        }
        else
        {
            System.out.println("Not a Perfect Number");
        }
    }
}



public class Q3
{
    public static void main(String A[])
    {


        Scanner sobj = new Scanner(System.in);

         int iNo=0;
      

        System.out.print("Enter Number : ");
         iNo = sobj.nextInt();


        LogicX lobj = new LogicX();

        

          lobj.CheckPerfect(iNo);

    }
}
