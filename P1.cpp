#include<iostream>

using namespace std;
  struct node 
  {
      int data;
      struct node *prev;
      struct node *next;

      node()
      {
           this->data = 0;
           prev=NULL;
           next=NULL;

      }
      node(int data)
      {
           this->data = data;
           prev=NULL;
           next=NULL;


      }
  };

class linkedlist
{
public:
    node *head;

    linkedlist()
    {
    head = NULL;
    }

    void add(int data)
    {
        node *tmp = new node(data);
        if(head==NULL)
        {
            head = tmp;
        }
        else
        {
            node *curr = head; 
            while (curr->next!=NULL)
            {
                curr = curr->next;
            }
            tmp->prev = curr;
            curr->next = tmp;
        }

    }

    // recursion

    node *rev(linkedlist list)
    {
        
        node *curr = list.head;
        node *next  = NULL;
        node *prev  = NULL;

        
        while(curr!=NULL)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
           

        }
        list.head = prev;
        return prev;
    }

    void print()
    {
        node *curr = head;
        while(curr!=NULL)
        {
            cout<<curr->data;
            curr = curr->next;
        }

    }


    ~linkedlist()
    {}

    

};





int main()
{

    linkedlist list;
    list.add(1);
    list.add(2);
    list.add(3);
    list.add(4);
    list.add(5);
    list.head = list.rev(list);
    list.print();
    


    

}