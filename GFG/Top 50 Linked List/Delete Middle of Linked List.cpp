class Solution {
  public:
    Node* deleteMid(Node* head) {
        // Your Code Here
        if(head == nullptr || head->next == nullptr){
            return nullptr;
        }
        
        if(head->next->next == nullptr){
            head->next = nullptr;
            return head;
        }
        
        Node* slow = head;
        Node* fast = head;
      
        while(fast != nullptr && fast->next != nullptr){    
            slow = slow->next;
            fast = fast->next->next;
        }
        
        Node* curr = slow->next;     
        slow->data = curr->data;
        slow->next = curr->next;    
        delete(curr); 
      
        return head; 
    }
};
