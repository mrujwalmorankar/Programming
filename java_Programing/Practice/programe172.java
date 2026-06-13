import java.util.*;


//input :5 
//output: 1 2 3 4 5


 

class programe172
{
   
 public  static void Display(int iNo)
{
    int iCnt=0;
   for (iCnt=1;iCnt<=iNo;iCnt++)
      {
        System.out.print(iCnt+"\t");
      }
      System.out.println("");
   }
    public static void main(String A[] )
     {
      
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the no oF Elements :");

        int iValue=0;

        iValue=sobj.nextInt();

        Display(iValue);
           
     }
}