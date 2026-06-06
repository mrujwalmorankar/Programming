
import java.util.Scanner;

//user kadhun input ghya ani tya no mdhle odd no  cha count moja
class programe89
{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;
               int iRet=0;//counting logic

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         iRet=dobj.SumDigits(iValue);//Function call with class object or riakami pishvi

         System.out.println("Summations of  Digits is :"+iRet);     //counting logic           
    }
}
class DigitX
{
  public int SumDigits(int iNo)
  {
    int iDigit=0;
    int iSum=0;
    

    while(iNo!=0 )//iNo not equal to 0
    {
      
        iDigit=iNo%10; //Digit Seperate logic

             
        iSum=iSum+iDigit;//counting logic
        
        iNo=iNo/10;//Digit less logic 

        
         
    }
return iSum;//return iCount value 


  }

}