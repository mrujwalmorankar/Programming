//TYPE 2 
import java.util.Scanner;



class programe41
{
   static void CheckDivisible(int iNO)
   {
       if((iNO %3 == 0 )&&( iNO %5==0))
       {
        System.out.println("No is Divisible By 3 & 5");

       }
       else{
          System.out.println("No is Not Divsible By 3 & 5");
       }

   }
    public static void main(String A[] )
     {
       
       Scanner sobj =new Scanner(System.in);
         
          int iValue=0;

       System.out.println("Enter Number :");

       iValue=sobj.nextInt();

  CheckDivisible(iValue);
      
       
    }
}