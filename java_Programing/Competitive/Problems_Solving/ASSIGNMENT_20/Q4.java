

//WAP  to check whether a number is a largest number or not

import java.util.Scanner;

class LogicX
{
    void FindLargest(int iNo)
    {
        int iDigit = 0;
        int iMax = 0;

        while(iNo > 0)
        {
            iDigit = iNo % 10;

            if(iDigit > iMax)
            {
                iMax = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Largest Digit is : " + iMax);
    }
}

public class Q4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int iNo = sobj.nextInt();

        LogicX lobj = new LogicX();

        lobj.FindLargest(iNo);
    }
}