import java.util.*;


//input :
//output: 
//ASCII value

 
class programe182
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    char ch='\0';
    
    for (iCnt=1,ch=65;iCnt<=iNo;iCnt++,ch++) 
    {
           System.out.print(ch+"\t");
        
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
