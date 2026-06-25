//WAP to display the grade of a student based on marks  

import java.util.Scanner;




class Logic
{
   
   void DisplayGrade(int marks)
    {
        if((marks >= 90) && (marks <= 100))
        {
            System.out.println("Grade A");
        }
        else if(marks >= 75)
        {
            System.out.println("Grade B");
        }
        else if(marks >= 60)
        {
            System.out.println("Grade C");
        }
        else if(marks >= 40)
        {
            System.out.println("Grade D");
        }
        else if(marks >= 0)
        {
            System.out.println("Fail");
        }
        else
        {
            System.out.println("Invalid Marks");
        }
      }

}
class Q2
{
    public static void main(String A[] )
     {
        int iValue=0;
      
       
      Scanner sobj=new Scanner(System.in);

       System.out.println("Enter Marks Out of 100 :");
        iValue=sobj.nextInt();

       Logic lobj=new Logic() ;

       lobj.DisplayGrade(iValue);
    }
}