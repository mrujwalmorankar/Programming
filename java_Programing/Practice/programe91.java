
import java.util.Scanner;


class programe91
{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;
               int iRet=0;//counting logic

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         iRet=dobj.SumEvenDigits(iValue);//Function call with class object or riakami pishvi

         System.out.println("Summations of  Even Digits is :"+iRet);     //counting logic           
    }
}
class DigitX
{
  public int SumEvenDigits(int iNo)
  {
    int iDigit=0;
    int iSum=0;
    

    while(iNo!=0 )//iNo not equal to 0
    {
      
        iDigit=iNo%10; //Digit Seperate logic

          if(iDigit%2==0)
          {  
        iSum=iSum+iDigit;
          }
        iNo=iNo/10;//Digit less logic 

        
         
    }
return iSum;//return iCount value 


  }

}