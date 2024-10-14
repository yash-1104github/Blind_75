
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
        
          Node* newNode = new Node(x);
          
         if(head == nullptr){
             return newNode;
         }
         
         Node* curr = head;
         
         while(curr->next != nullptr){
               curr = curr->next;
        }
        
        curr -> next = newNode; 
        
        return head;
        
    }
};
