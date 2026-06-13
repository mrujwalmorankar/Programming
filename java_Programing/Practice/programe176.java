import java.util.*;


//input :7
//output: 1* 3*  5* 7

 

class programe176
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    
    for (iCnt=1;iCnt<=iNo;iCnt++)
      {

        if(iCnt%2==0)
        {
      
            System.out.print("*\t");
       
        }

       else
        {
       
            System.out.print(iCnt);
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
     }
           
     }
