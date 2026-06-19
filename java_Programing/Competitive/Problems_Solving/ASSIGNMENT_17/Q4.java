//WAP to find the minimum of two numbers..
import java.util.Scanner;


class LogicXX
{
  void findMin(int ifirst,int iSecond)
  {
    if(ifirst<iSecond)
    {
    System.out.println("Minimum no is :"+ifirst);
    }
    else if(iSecond<ifirst)
    {
        System.out.println("Minimum  no is :"+iSecond);
    }
    else
    {
    System.out.println("Both numbers are equal");
    } 
  }    
}




public class Q4
{
    public static void main(String A[])
     {
        int iValue1=0;
        int iValue2=0;

         Scanner sobj=new Scanner(System.in);
         
         LogicXX lobj =new LogicXX();

          System.out.println("Enter first no :");
          iValue1=sobj.nextInt();

          
          System.out.println("Enter Second no:");
          iValue2=sobj.nextInt();

         lobj.findMin(iValue1,iValue2);
    }
}
