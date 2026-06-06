
import java.util.Scanner;

//user kadhun input ghya ani tya no mdhle even no  cha count moja
class programe86
{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;
               int iRet=0;//counting logic

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         iRet=dobj.CountEvenDigits(iValue);//Function call with class object or riakami pishvi

         System.out.println("Number of Even Digits are :"+iRet);     //counting logic           
    }
}
class DigitX
{
  public int CountEvenDigits(int iNo)
  {
    int iDigit=0;
    int iCount=0;///counting logic

    while(iNo!=0 )//iNo not equal to 0
    {
      
        iDigit=iNo%10; //Digit Seperate logic

        if(iDigit%2==0)
        {      
        iCount++;//counting logic
        }
        iNo=iNo/10;//Digit less logic 

        
         
    }
return iCount;//return iCount value 


  }

}