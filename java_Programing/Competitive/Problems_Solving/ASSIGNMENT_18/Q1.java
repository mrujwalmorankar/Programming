
import java.util.Scanner;


//WAP to check whether a number is prime or not

class Logic
{
    void CheckPrime(int NO)
    {
          int iCnt = 0;

        if(NO <= 1)
        {
            System.out.println(NO + " is not a Prime Number");
            return;
        }
        
        for(iCnt = 2; iCnt * iCnt <= NO; iCnt++)
        {
            if(NO % iCnt == 0)
            {
                System.out.println(NO + " is not a Prime Number");
                return;
            }
        }

        System.out.println(NO+ " is a Prime Number");
    }
}




class Q1
{
    
    public static void main(String A[])
    {
           int iValue =0;

        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter Random Number :");

        iValue=sobj.nextInt();

        Logic lobj=new Logic();

        lobj.CheckPrime(iValue);
    }

}