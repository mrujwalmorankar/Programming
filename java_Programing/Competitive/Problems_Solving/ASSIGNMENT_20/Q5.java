//WAP  to check whether a number is a smallest number....


import java.util.Scanner;

class LogicX
{
    void FindSmallest(int iNo)
    {
        int iDigit = 0;
        int iMin = 9;

        while(iNo > 0)
        {
            iDigit = iNo % 10;

            if(iDigit < iMin)
            {
                iMin = iDigit;
            }

            iNo = iNo / 10;
        }

        System.out.println("Smallest Digit is : " + iMin);
    }
}

public class Q5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.print("Enter Number : ");
        int iNo = sobj.nextInt();

        LogicX lobj = new LogicX();

        lobj.FindSmallest(iNo);
    }
}