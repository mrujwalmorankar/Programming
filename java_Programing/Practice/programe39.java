
//TYPE 1



import java.util.Scanner;

class programe39
{
    public static void main(String A[] )
     {
       int ivalue=0;
       Scanner sobj =new Scanner(System.in);
         
          int iValue=0;

       System.out.println("Enter Number :");

       iValue=sobj.nextInt();

       if((iValue %3 == 0 )&&( iValue %5==0))
       {
        System.out.println("No is Divisible By 3 & 5");

       }
       else{
          System.out.println("No is Not Divsible By 3 & 5");
       }

       
    }
}