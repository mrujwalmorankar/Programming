//WAP to find minimum of three numbers


import java.util.Scanner;


class Logm
{
    void Min(int NO1,int NO2,int NO3)
    {  
        
        if((NO1 <= NO2) && (NO1 <= NO3))
        {
            System.out.println("Minimum number is : " + NO1);
        }
        else if((NO2 <= NO1) && (NO2 <= NO3))
        {
            System.out.println("Minimum number is : " + NO2);
        }
        else
        {
            System.out.println("Minimum number is : " + NO3);
        }
        }
        

    }      


public class Q4
 {
    public static void main(String A[] )
    {
     
        int iValue1=0;
        int iValue2 =0;
        int iValue3=0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter First Number : ");
        iValue1=sobj.nextInt();
        System.out.println("Enter Second Number : ");
        iValue2=sobj.nextInt();
        System.out.println("Enter Three Number : ");
        iValue3=sobj.nextInt();


         Logm lobj=new Logm();
         
         lobj.Min(iValue1,iValue2,iValue3);



    }

    
}
