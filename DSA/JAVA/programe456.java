class node
{
    public int data;
    public node next;

    public node(int no)
    {
        this.data = no;
        this.next = null;
    }
}

class SinglyLL
{
    private node first;
    private int iCount;

    public SinglyLL()
    {
       
        this.first = null;
        this.iCount = 0;
    }

    public void Insertfirst(int no)
    {
        node newn = new node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            newn.next = first;
            first = newn;
        }

        iCount++;
    }

    public void Insertlast(int no)
    {
        node newn = new node(no);

        if(first == null)
        {
            first = newn;
        }
        else
        {
            node temp = first;

            while(temp.next != null)
            {
                temp = temp.next;
            }

            temp.next = newn;
        }

        iCount++;
    }

    public void Display()
    {
        node temp = first;

        while(temp != null)
        {
            System.out.print("| " + temp.data + " | -> ");
            temp = temp.next;
        }

        System.out.println("NULL");
    }

    public int Count()
    {
        return iCount;
    }

    public void Deletefirst()
    {
        if(first==null)
        {
          return;

        }
        else if(first.next==null)
        {
          first=null;
        }
        else
        {
          first=first.next;
        }

        iCount--;
    }

    public void Deletelast()
    {
        if(first==null)
        {
          return;

        }
        else if(first.next==null)
        {
          first=null;
        }
        else
        { 
          node temp=first;

          while(temp.next.next!=null)
          {
            temp=temp.next;
          }
          
          temp.next=null;
        }

        iCount--;
        
    }

    public void InsertAtPos(int no, int pos)
    {
    }

    public void DeleteAtPos(int pos)
    {
        
    }
}

public class programe456
{
    public static void main(String A[])
    {
        SinglyLL sobj = new SinglyLL();

        sobj.Insertfirst(51);
        sobj.Insertfirst(21);
        sobj.Insertfirst(11);

        sobj.Insertlast(101);
        sobj.Insertlast(111);
        sobj.Insertlast(121);

        int iRet=0;

      
        sobj.Display();
         iRet=sobj.Count();
        
     System.out.println("\nNumber of nodes are : " + sobj.Count());

        sobj.Deletefirst();
        sobj.Deletelast();
        
        sobj.Display();
         iRet=sobj.Count();
        
     System.out.println("\nNumber of nodes are : " + sobj.Count());

    }
}