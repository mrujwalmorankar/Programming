//prime no programe 4 
import java.util.Scanner;


class NumberX
{
   public boolean  CheckPrime(int iNo)
   {
      int  iCnt=0;
      boolean bFlag=false; //using flag concept
       
       for(bFlag =true,iCnt = 2; iCnt <=( iNo / 2 ); iCnt++)//multiinitialization//max 2 semicolon use in for  loop
       {
         if((iNo % iCnt ==0))
         {
            bFlag=false;
            break;
         }

         }
         return bFlag;
  
  }
 }
class programe69
{
     public static void main(String A[] )
     {
       
       Scanner sobj =new Scanner(System.in);
         
       int iValue=0;
       boolean bRet=false;

       System.out.println("Enter Number :");
                iValue=sobj.nextInt();

      NumberX nobj =new  NumberX();

      
      bRet = nobj.CheckPrime(iValue);

      if(bRet == true)
      {
         System.out.println("It is Prime");
      }
      else
      {
         System.out.println("It is not Prime");
      }


      nobj.CheckPrime(iValue);

     }
}
