
import java.util.Scanner;

//user kadhun input ghya ani tya no mdhle even odd no  cha count moja
class programe88
{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;
              

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         dobj.CountoddEvenDigits(iValue);//Function call with class object or riakami pishvi

                      
    }
}
class DigitX
{
  public void CountoddEvenDigits(int iNo)
  {
    int iDigit=0;
    int iCountEven=0;
    int iCountOdd=0; 

    while(iNo!=0 )//iNo not equal to 0
    {
      
        iDigit=iNo%10; //Digit Seperate logic

        if(iDigit %2 ==0)
        {      
        iCountEven++;//counting logic
        }
        else 
        {
          iCountOdd++;
        }
        iNo=iNo/10;//Digit less logic 

        
         
    }

System.out.println("No of even Digits :"+iCountEven);
System.out.println("No of odd Digits :"+iCountOdd);

  }

}