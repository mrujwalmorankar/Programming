import java.util.*;


//input :7
//output: 1 * 2 * 3 * 4

 

class programe177
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    int iCount=1;
    
    for (iCnt=1;iCnt<=iNo;iCnt++) 
    {
         if(iCnt % 2==0)
         {
           System.out.print("*");
         }
         else
         {
            System.out.print(iCount);
            iCount++;
         }
         
        
    }
}
    public static void main(String A[] )
     {
      
        Scanner sobj=new Scanner(System.in);

        System.out.println("Enter the no oF Elements :");

        int iValue=0;

        iValue=sobj.nextInt();

      
         Display(iValue);

         sobj.close();
     }

           
     }
