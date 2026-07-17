

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
   public node temp;
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
      }
public class programe452
{
  public static void main(String A[] )
   {
      SinglyLL sobj=new SinglyLL();


   }
}
