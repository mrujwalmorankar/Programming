import java.util.*;


//input :11
//output: ***   ###     ***     ##
//ASCII value

 
class programe188
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    
   
    for (iCnt=1;iCnt<=iNo;iCnt++) //logic remaining 
    {
        if(iCnt %2 != 0)
        {
           System.out.print("\t");

        }
        else
        {
            System.out.print("\t");
            
            
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
