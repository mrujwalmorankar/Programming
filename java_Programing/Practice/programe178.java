import java.util.*;


//input :7
//output: 1 * 2 * 3 * 4

 //without using second counter

class programe178
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    
    
    for (iCnt=1;iCnt<=iNo;iCnt++) 
    {
         if(iCnt % 2==0)
         {
           System.out.print("*\t");
         }
         else
         {
               System.out.print(((iCnt/2)+1)+"\t");
                
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
