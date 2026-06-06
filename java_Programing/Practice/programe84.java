
import java.util.Scanner;

//Without using mod operations
class programe84

{
    public static void main(String A[] )
     {
            Scanner sobj = new Scanner(System.in);//Scanner object
             DigitX dobj=new DigitX();//DigitX class object

               int iValue=0;
               int iRet=0;//counting logic

               System.out.println("Enter no :");
                         iValue=sobj.nextInt();

         iRet=dobj.CountDigits(iValue);//Function call with class object or riakami pishvi

         System.out.println("Number of Digits are :"+iRet);     //counting logic           
    }
}
class DigitX
{
  public int CountDigits(int iNo)
  {
    
    int iCount=0;///counting logic

    while(iNo!=0 )//iNo not equal to 0
    {
        iCount++;//counting logic
        
        iNo=iNo/10;//Digit less logic 

        
         
    }
return iCount;//return iCount value 


  }

}