import java.util.*;

class ArrayX
{
    private int Arr[];
    private int iSize;

    public ArrayX(int X)//Destructor
    {
        iSize = X;//characteristic intialized
        Arr = new int[iSize];//
    }

    public void Accept(Scanner sobj)
    {
        System.out.println("Enter the elements : ");

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of the array are : ");

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            System.out.println(Arr[iCnt]);
        }
    }

    public int Summation()
    {
        int iSum = 0;

        for(int iCnt = 0; iCnt < iSize; iCnt++)
        {
            iSum = iSum + Arr[iCnt];
        }

        return iSum;
    }
}

class Convert169
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iLength = 0;
        int iRet = 0;

        System.out.println("Enter the number of elements : ");
        iLength = sobj.nextInt();

        ArrayX aobj = new ArrayX(iLength);

        aobj.Accept(sobj);
        aobj.Display();

        iRet = aobj.Summation();

        System.out.println("Summation is : " + iRet);

        


        System.gc();

      
    }
   
}