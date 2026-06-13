import java.util.*;


//input :
//output: 


 
class programe191
{

    public  static void Display()
    {
       int i=0;
       int j=0;

    for(i=1 ; i <= 4; i++)
    {

        
      for(j=1;i<=4;j++)
       {
         System.out.print("*\t");

       }
        System.out.println();
      }
    }

    public static void main(String A[] )
     {
      
        Scanner sobj=new Scanner(System.in);

        //System.out.println("Enter the no oF Elements :");

        int iValue=0;

        //iValue=sobj.nextInt();

      
         Display();

         sobj.close();
     }
    
           
     }
