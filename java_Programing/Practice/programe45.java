//TYPE 3 final standard code 
import java.util.Scanner;


class NumberX
{
    public   boolean CheckDivisible(int iNO)
   {
       if((iNO % 3 == 0 )&&( iNO % 5 == 0))
       {
        return true;

       }
       else
       {
          return false;
       }

   }

}
class programe45
{
     public static void main(String A[] )
     {
       
       Scanner sobj =new Scanner(System.in);
         
          int iValue=0;
          boolean bRet=false;



       System.out.println("Enter Number :");

       iValue=sobj.nextInt();

      NumberX nobj =new  NumberX();
       bRet =nobj.CheckDivisible(iValue);
      
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