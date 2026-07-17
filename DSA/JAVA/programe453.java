

class node
{
    public int data;
    public node next;

    node(int no)
    {
      this.data=no;
      this.next=null;;
    }
}

class SinglyLL
{
   private   node first;//reference of node class
   private   int  iCount;
   private   node temp;

   public SinglyLL() //Constructor
    { 
      System.out.println("Inside constructor");
      this.first=null;
      this.iCount=0;
      this.temp=null;
    }

      public void Insertfirst(int no)
      {
              node newn =null;

              if( null == first )
              {
                first=newn;  
              }
              else
                {
                  newn.next=first;
                  first=newn;
                }
              iCount++;
      }
      public void Insertlast(int no)
      {
              node newn =null;

              if( null == first )
              {
                first=newn;  
              }
              else
                {
                while(temp.next !=null)
                {
                  temp=temp.next;
                }
                  temp.next=newn;
                
                }
              iCount++;

      }
     /*  public void Display()
      { 
        while (first)
       {
          System.out.println("|"+ first->data + "| ->");
          first=first->next;
       }
       
       System.out.println("NULL");
    }*/

      }
      public int Count(int no)
      {
      return iCount;
      }
      public void InsertAtPos(int no)
      {

      }
      public void Deletefirst()
      {

      }
      public void Deletelast()
      {

      }
      public void DeleteAtPos(int no)
      {

      }

      
public class programe453
{
  public static void main(String A[] )
   {
      SinglyLL sobj=new SinglyLL();

         sobj.Insertfirst(51);
         sobj.Insertfirst(21);
         sobj.Insertfirst(111);
         
         
   }
}
