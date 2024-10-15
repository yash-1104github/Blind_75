class Solution {
  public:
    /* Function to delete a node from a linked list */
    Node* deleteNode(Node* head, int x) {
        // code here
        if(x == 1 ) return head->next;
        
        Node* curr = head;
        int cnt = 1;
        
        while(curr != nullptr){  
            if(cnt == x-1){ 
                Node* temp = curr->next;
                curr-> next = curr->next->next;
                delete(temp);         
            }
            curr = curr -> next;  
            cnt++;
        }
        return head;
    }
};
