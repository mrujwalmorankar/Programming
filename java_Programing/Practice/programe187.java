import java.util.*;


//input :7
//output: A b C d E f G
//ASCII value

 
class programe187
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    char ch1='\0';
     char ch2='\0';
   
    for (iCnt=1,ch1='A',ch2='a';iCnt<=iNo;iCnt++,ch1++,ch2++) 
    {
        if(iCnt %2 != 0)
        {
           System.out.print(ch1 +"\t");

        }
        else
        {
            System.out.print(ch2 +"\t");
            
            
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
