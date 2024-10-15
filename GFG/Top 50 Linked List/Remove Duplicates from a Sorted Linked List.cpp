class Solution {
  public:
    // Function to remove duplicates from sorted linked list.
    Node* removeDuplicates(Node* head) {
        // code here
        if(head == NULL || head->next == NULL){
            return head;
        }
        
        Node* curr = head;
        
        while(curr != nullptr && curr -> next != NULL){
            
            if(curr->data == curr->next->data){
    
                Node* temp = curr->next;
                curr -> next =  curr -> next ->next;
                delete temp;
            }
            else{
                   curr = curr->next;
            }
        }
        
       return head;
    }
};
