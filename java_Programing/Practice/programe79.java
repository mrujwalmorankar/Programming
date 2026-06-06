
import java.util.Scanner;


class programe79
{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         dobj.DisplayDigits(iValue);//Function call with class object                 
    }
}
class DigitX
{
  public void DisplayDigits(int iNo)
  {
    int iDigit=0;

    while(iNo!=0)//iNo not equal to 0
    {
        iDigit=iNo%10; //Digit Seperate logic

        System.out.println(iDigit);
        
        iNo=iNo/10;//Digit less logic 
        
       
    }



  }

}