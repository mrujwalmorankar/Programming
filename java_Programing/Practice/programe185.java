import java.util.*;


//input :7
//output: A*C*E*G
//ASCII value

 
class programe185
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    char ch='\0';
    
    for (iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++) 
    {
        if(iCnt %2 == 0)
        {
           System.out.print("*\t");

        }
        else
        {
            System.out.print(ch+"\t");
            
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
