class Solution {
  public:
    Node *insertInMiddle(Node *head, int x) {
        // Create new node
         Node* newNode = new Node(x);
      
        if(head == nullptr){
            return newNode;
        }
      
        //find mid node
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast != nullptr && fast->next != NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
     
        //link the new node
        Node* temp = slow->next;
        slow -> next = newNode;
        newNode-> next = temp ; 
        
        //return nodes
       return head;
    }
};
