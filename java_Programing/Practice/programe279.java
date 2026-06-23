
import java.util.*;

 class StringX
 {
    

   public String UpdateString(String str)
    {  
      int i=0;


       char Arr[]=str.toCharArray();//string la convert kela array mdhe

        for(i=0;i<Arr.length;i++)
        {
           if((Arr[i] == 'A') || (Arr[i] == 'a'))
             {
                 Arr[i]='_';
             }
         
         }
         

      return new String(Arr);//Return and Convert Array to String 
   } 


   
 }
     


class programe279
{
   public static void main(String A[] ) 
   {
      

       Scanner sobj=new Scanner(System.in);
       String  data = null;

       StringX strobj= new StringX();
          String sRet=null;

           

          System.out.println("Enter String :");
           data = sobj.nextLine();


          sRet=strobj.UpdateString(data);

          System.out.println("Updated String is :"+sRet);
          
          

   }
}