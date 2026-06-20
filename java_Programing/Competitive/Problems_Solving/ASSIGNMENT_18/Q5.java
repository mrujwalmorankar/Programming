// WAP to print the multiplication table of a number

import java.util.Scanner;

class Logy
{
    void Table(int NO)
    {
        int iCnt = 0;

        for(iCnt = 1; iCnt <= 10; iCnt++)
        {
            System.out.println(NO + " * " + iCnt + " = " + (NO * iCnt));
        }
    }
}

public class Q5
{
    public static void main(String A[])
    {
        int iValue = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        iValue = sobj.nextInt();

        Logy lobj = new Logy();

        lobj.Table(iValue);
    }
}