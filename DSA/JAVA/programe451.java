

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
   public node first;//reference of node class
   public int  iCount;

   public SinglyLL() //Constructor
    { 
      System.out.println("Inside constructor");
      this.first=null;
      this.iCount=0;
    }





}

public class programe451
{
  public static void main(String A[] )
   {
      SinglyLL sobj=new SinglyLL();
   }
}
