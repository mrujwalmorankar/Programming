//TYPE 2 
import java.util.Scanner;



class programe43
{
  public  static boolean CheckDivisible(int iNO)
   {
       if((iNO %3 == 0 )&&( iNO %5==0))
       {
        return true;

       }
       else
       {
          return false;
       }

   }
    public static void main(String A[] )
     {
       
       Scanner sobj =new Scanner(System.in);
         
          int iValue=0;
          boolean bRet=false;



       System.out.println("Enter Number :");

       iValue=sobj.nextInt();

       bRet = CheckDivisible(iValue);
      
      if(bRet== true)
      {
         System.out.println("Number is Divisible BY 3 & 5");
         

      }
      else
      {
         System.out.println("Number is not Divisible BY 3 & 5");
      }
             
    }
}