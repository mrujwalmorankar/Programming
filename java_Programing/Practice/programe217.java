

/*
 iRow=
iCall=


% % % % % % %
%  %        %
%     %     %
%         % %
% % % % % % %



*/

import java.util.Scanner;

class Pattern
{
   public void Display(int iRow,int iCol)
   {
    int i=0;    int j=0; 
  
         if(iRow!=iCol)//filter for Diagonal Pattern
        {
             System.out.println("Invalid Parameter");
             System.out.println("No of Rows and Columns Should Be Same");
             return;
        }
    for ( i = 1 ; i<=iRow; i++) 
        {
              for(j=1;j<=iCol; j++)
              {
                
                if(j==1 || j==iCol ||i==1||i==iRow||i==j)
                {
                    System.out.print("%\t");
                }
                else
                {
                    System.out.print(" \t");
                }
               
                
              }
              System.out.println();
        } 

   }

}    

 class programe217
{

    public static void main(String A [] )
    {
        

             Scanner sobj=new Scanner(System.in);

        int iValue1=0;
        int iValue2=0;

            System.out.println("Enter no of Rows :");
            iValue1=sobj.nextInt();

            System.out.println("Enter no of Columns :");
            iValue2=sobj.nextInt();

         Pattern pobj=new Pattern();

         pobj.Display(iValue2, iValue2);



    }   
}
