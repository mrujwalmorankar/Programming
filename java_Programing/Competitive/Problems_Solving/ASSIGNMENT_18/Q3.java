//WAP to find maximum off two numbes


import java.util.Scanner;


class Log
{
    void Max(int NO1,int NO2)
    {  
        {
            if(NO1>NO2)
            {
        
            System.out.println("Maximum number is : " + NO1);
           }
        else
          {
            System.out.println("Maximum number is : " + NO2);
        }
            }
        }
        

    }      


public class Q3
 {
    public static void main(String A[] )
    {
     
        int iValue1=0;
        int iValue2 =0;
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter First Number : ");
        iValue1=sobj.nextInt();
        System.out.println("Enter Second Number : ");
        iValue2=sobj.nextInt();


         Log lobj=new Log();
         
         lobj.Max(iValue1,iValue2);



    }

    
}
