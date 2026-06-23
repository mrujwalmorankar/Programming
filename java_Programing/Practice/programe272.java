
import java.util.*;

 class StringX
 {
    public int  CountCapital(String str)
    {  int i=0;
       int iCount=0;

       char Arr[]=str.toCharArray();//string la convert kela array mdhe

        for(i=0;i<Arr.length;i++)
        {
           if((Arr[i]>='A')&&(Arr[i]<='Z'))
           {
             iCount++;
           }
         }
      return iCount;
   } 

   public int  Countsmall(String str)
    {  int i=0;
       int iCount=0;

       char Arr[]=str.toCharArray();//string la convert kela array mdhe

        for(i=0;i<Arr.length;i++)
        {
           if((Arr[i]>='a')&&(Arr[i]<='z'))
           {
             iCount++;
           }
         }
      return iCount;
   } 
 }
     


class programe272
{
   public static void main(String A[] ) 
   {
      int iRet=0;

       Scanner sobj=new Scanner(System.in);
       String  data = null;

       StringX strobj= new StringX();
          


          System.out.println("Enter String :");
     
          data=sobj.nextLine();

         iRet= strobj.CountCapital(data); 
         System.out.println("No of Capital Characters : "+iRet);
 
         iRet= strobj.Countsmall(data);
         System.out.println("No of Small Characters : "+iRet);         
          

   }
}