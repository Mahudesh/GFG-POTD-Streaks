/* structure for a node
class Node {
 public:
  int data;
  Node *next;

  Node(int x){
      data = x;
      next = NULL;
  }
}; */

class Solution {
  public:
    Node* sortedInsert(Node* head, int data)
    {
        // code here
        
        // At Head
        
        if(head->data>=data)
        {
            Node* newNode=new Node(data);
            Node* t=head->next;
            Node* prev=head;
            while(t!=head)
            {
                prev=t;
                t=t->next;
            }
            prev->next=newNode;
            newNode->next=head;
            head=newNode;
            return head;
            
        }
        
        Node* temp=head->next;
        
        Node* prev=head;
        while(temp!=head && temp->data<=data)
        {
            prev=temp;
            temp=temp->next;
        }
        
        
        
        Node* newNode=new Node(data);
        prev->next=newNode;
        newNode->next=temp;
        
        return head;
        
    }
};
