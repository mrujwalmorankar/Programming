//WAP to check whether a number is a pallindrome or not..

import java.util.Scanner;

class Logic
{
    void CheckPalindrome(int No)
    {
        int Temp = No;
        int Rev = 0;
        int Digit = 0;

        while(No != 0)
        {
            Digit = No % 10;//pallindrome logic s
            Rev = (Rev * 10) + Digit;
            No = No / 10;
        }

        if(Temp == Rev)
        {
            System.out.println("Number is Palindrome");
        }
        else
        {
            System.out.println("Number is Not Palindrome");
        }
    }
}

class Q2
{
    public static void main(String A[])
    {
       int iValue=0;

        Scanner sobj=new Scanner(System.in);

        Logic obj = new Logic();
          
        System.out.println("Enter number :");
        iValue=sobj.nextInt();


        obj.CheckPalindrome(iValue);
    }
}