import java.util.*;


//input :7
//output: A*B*C*D
//ASCII value

 
class programe184
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    char ch='\0';
    
    for (iCnt=1,ch='A';iCnt<=iNo;iCnt++) 
    {
        if(iCnt%2==0 )
        {
           System.out.print("*\t");

        }
        else
        {
            System.out.print(ch+"\t");
            ch++;
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
