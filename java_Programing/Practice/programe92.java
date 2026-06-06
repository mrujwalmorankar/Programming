
import java.util.Scanner;

//Reverse number programe like palindrome
class programe92
{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;
               int iRet=0;

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         iRet=dobj.ReverseNumber(iValue);//Function call with class object or riakami pishvi

         System.out.println("Reverse no is :"+iRet);             
    }
}
class DigitX
{
  public int ReverseNumber(int iNo)
  {
    int iDigit=0;
    int iRev=0;

    

    while(iNo!=0 )//iNo not equal to 0
    {
      
        iDigit=iNo%10; //Digit Seperate logic
        iRev=(iRev *10)+iDigit;//logic for reverse     
        iNo=iNo/10;//Digit less logic 
    }
return iRev;//return  value 


  }

}