//WAP to find the maximum of two numbers..
import java.util.Scanner;


class LogicX
{
  void findMax(int ifirst,int iSecond)
  {
    if(ifirst>iSecond)
    {
    System.out.println("Maximum no is :"+ifirst);
    }
    else if(iSecond>ifirst)
    {
        System.out.println("Maximum no is :"+iSecond);
    }
    else
    {
    System.out.println("Both numbers are equal");
    } 
  }    
}




public class Q3 
{
    public static void main(String A[])
     {
        int iValue1=0;
        int iValue2=0;

         Scanner sobj=new Scanner(System.in);
         
         LogicX lobj =new LogicX();

          System.out.println("Enter first no :");
          iValue1=sobj.nextInt();

          
          System.out.println("Enter Second no:");
          iValue2=sobj.nextInt();
         lobj.findMax(iValue1,iValue2);
    }
}
