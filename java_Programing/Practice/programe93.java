
import java.util.Scanner;

//check palindrome using no
class programe93
{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;
               boolean bRet=false;

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         bRet=dobj.checkpallindrome(iValue);//Function call with class object or riakami pishvi

        if(bRet==true)
        {
          System.out.println("Number is pallindrome");
        }
        else{
          System.out.println("Number is not pallindrome");
        }             
    }  
}
class DigitX
{
  public Boolean checkpallindrome(int iNo)
  {
    int iDigit=0;

    int iRev=0;
    int iTemp=0;//temporary variable
    

    iTemp=iNo;//Copy of iNo variable to comapre with iRev

    while(iNo!=0 )//iNo not equal to 0
    {
      
        iDigit=iNo%10; //Digit Seperate logic
        iRev=(iRev *10)+iDigit;//logic for reverse     
        iNo=iNo/10;//Digit less logic 
    }
     if(iRev==iTemp)
     {
      return true;
     } 
   else
   {
    return false;
   }

  }

}