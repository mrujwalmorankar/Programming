
import java.util.Scanner;
class ArrayX
{
 public  static void  Update(int Arr[])
   {
     int iCnt=0;

      for(iCnt=0;iCnt<Arr.length;iCnt++)
        {
            Arr[iCnt]++;
        }
      }
}
class programe146
{

 public static void main(String A[] )
  {
     Scanner sobj=new Scanner(System.in);
    
     int Brr[]={10,20,30,40,50};
     int iCnt=0;
     
      System.out.println("Array Elements before function call :");

    for(iCnt=0;iCnt<5;iCnt++)
    {  
          System.out.println(Brr[iCnt]);
    }

    ArrayX.Update(Brr);

  
   System.out.println("Array Elements After function call :");

    for(iCnt=0;iCnt<5;iCnt++)
    {  
          System.out.println(Brr[iCnt]);
    }  
  
  }
  }
