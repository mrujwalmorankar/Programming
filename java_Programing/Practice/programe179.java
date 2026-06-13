import java.util.*;


//input :7
//output: abcdefgh


class programe179
{

    public  static void Display(int iNo)
{
    int iCnt=0;
    char ch='a';
    
    for (iCnt=1;iCnt<=iNo;iCnt++) 
    {
           System.out.print(ch);
           ch++;
         
        
        
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
