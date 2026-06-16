

/*
 iRow=
iCall=

4 4 4 4
3 3 3 3 
2 2 2 2
1 1 1 1

row wise change i
*/

import java.util.Scanner;

class Pattern
{
   public void Display(int iRow,int iCol)
   {
    int i=0;    int j=0; 
  

    for ( i = iRow  ; i >=1; i--) //row ulta zala row wise chang
        {
              for(j=1;j<=iCol; j++)
              {
               
                {
                System.out.print(i+"\t");//saral  change hotoy mhnje j change hotoy row nusar 

            
                }
                
              }
              System.out.println();
        } 

   }

}    

 class programe208
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
