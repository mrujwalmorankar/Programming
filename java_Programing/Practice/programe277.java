
import Marvellous.StringX;
import java.util.*;

     


class programe277
{
   public static void main(String A[] ) 
   {
      int iRet=0;

       Scanner sobj=new Scanner(System.in);
       String  data = null;

       StringX strobj= new StringX();//ERROR
          


          System.out.println("Enter String :");
     
          data=sobj.nextLine();

         iRet= strobj.CountCapital(data); 
         System.out.println("No of Capital Characters : "+iRet);
 
         iRet= strobj.Countsmall(data);
         System.out.println("No of Small Characters : "+iRet);     
         
         iRet= strobj.CountDigits(data);
         System.out.println("No of Digits are : "+iRet);  
         
          iRet= strobj.CountSpace(data);
         System.out.println("No of White Spaces are : "+iRet);  

         iRet= strobj.CountSpecial(data);
         System.out.println("No of Special Symbols are : "+iRet);  
          
          

   }
}