
import java.util.*;

 class StringX
 {
     public String toUpperX(String str)
    {  
      int i=0;


       char Arr[]=str.toCharArray();//string la convert kela array mdhe

        for(i=0;i<Arr.length;i++)
        {
          if((Arr[i] >= 'a')&&(Arr[i] <= 'z'))
         {
         Arr[i]= (char) (Arr[i] - 32);//issue ahe
         
         }
  

      
   }
   return new String(Arr);//Return and Convert Array to String 
} 

   public String toLowerX(String str)
    {  
      int i=0;


       char Arr[]=str.toCharArray();//string la convert kela array mdhe

        for(i=0;i<Arr.length;i++)
        {
          if((Arr[i] >= 'A')&&(Arr[i] <= 'Z'))
         {
            
         Arr[i]= (char) (Arr[i] + 32);
         
         }
         

      }
       return new String(Arr);

    }

    public String toggle(String str)
    {  
      int i=0;


       char Arr[]=str.toCharArray();//string la convert kela array mdhe

        for(i=0;i<Arr.length;i++)
        {
          if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
         {
            
         Arr[i]= (char) (Arr[i] + 32);
         
         }
         else if((Arr[i] >= 'a') && (Arr[i] <= 'z'))
         {
            Arr[i]= (char) (Arr[i] - 32);
         }

         
       } 
        return new String(Arr);
    }

   
}
     


class programe289
{
   public static void main(String A[] ) 
   {
      

       Scanner sobj=new Scanner(System.in);
       String  data = null;

       StringX strobj= new StringX();
          String sRet=null;

           

          System.out.println("Enter String :");
           data = sobj.nextLine();



          sRet=strobj.toLowerX(data);

          System.out.println("Updated String is :"+sRet);
          
           sRet=strobj.toUpperX(data);
          
            System.out.println("Updated String is :"+sRet);

            
           sRet=strobj.toggle(data);
          
            System.out.println("Updated String is :"+sRet);
          

   }
}