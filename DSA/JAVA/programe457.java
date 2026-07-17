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

    public void InsertAtPos(int no, int iPos)
    {
         node temp=null;
         node newn=null;
        
         int i=0;

          if( (iPos<1) ||(iPos>iCount+1))//LL is empty
         {
          return; 
         }
         if(iPos==1)
         {
            Insertfirst(no);
         }
         else if(iPos==iCount +1)
         {
            Insertlast(no);
         }
         else
         {
            newn=new node(no);
            temp=first;

            for(i=0;i<iPos-1;i++)
            {
               temp=temp.next;
            }

            newn.next=temp.next;
            temp.next=newn;

            iCount++;
         }
        
    }

    public void DeleteAtPos( int iPos)
    {
        
         node temp=null;
        
        
         int i=0;

          if( (iPos<1) ||(iPos>iCount))
         {
          return; 
         }
         if(iPos==1)
         {
            Deletefirst();
         }
         else if(iPos==iCount)
         {
            Deletelast();
         }
         else
         {
            
            temp=first;

            for(i=0;i<iPos-1;i++)
            {
               temp=temp.next;
            }

           temp.next=temp.next.next;          
 
            iCount--;
         }
    }
}

public class programe457
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

     sobj.InsertAtPos(105, 4);
        
        sobj.Display();
         iRet=sobj.Count();
        
     System.out.println("\nNumber of nodes are : " + sobj.Count());

     
     sobj.DeleteAtPos(4);
        
        sobj.Display();
         iRet=sobj.Count();
        
     System.out.println("\nNumber of nodes are : " + sobj.Count());

    }
}