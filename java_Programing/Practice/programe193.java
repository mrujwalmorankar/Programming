import java.util.*;


//Square matrix
/*
iRow=4
iCol=4

1 2 3 4
1 2 3 4
1 2 3 4
1 2 3 4

 */

 
class programe193
{

    public  static void Display(int iRow,int iCol)
    {
       int i=0;
       int j=0;

    for(i=1;i<=iRow;i++)
       {

        for(j=1;j<=iCol;j++)
         {
          System.out.print(j+"\t");

         } 
       System.out.println();
    }
   }

    public static void main(String A[] )
     {
      
        Scanner sobj=new Scanner(System.in);

        int iValue1=0;
        int iValue2=0;

        System.out.println("Enter the no oF rows :");
        iValue1=sobj.nextInt();

        System.out.println("Enter the no oF columns:");
        iValue2=sobj.nextInt();

      
         Display(iValue1,iValue2);

         sobj.close();
     }
   }

   
