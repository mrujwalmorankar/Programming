class Logic
{
    int SumofDigits(int num)
    {
        int iDigit = 0;
        int iSum = 0;

        while(num != 0)
        {
            iDigit = num % 10;
            iSum = iSum + iDigit;
            num = num / 10;
        }

        return iSum;
    }
}

class Q1
{
    public static void main(String A[])
    {
        Logic obj = new Logic();

        int iRet = obj.SumofDigits(1234);

        System.out.println("Sum of Digits is : " + iRet);
    }
}