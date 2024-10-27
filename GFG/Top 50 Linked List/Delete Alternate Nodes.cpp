class Solution {
  public:
    void deleteAlt(struct Node *head) {
        // Code here
        //recursion
        if(head == nullptr || head->next ==  nullptr){
            return ;
        }
        
        Node* todelete = head->next;
        
        head->next = todelete->next;
        
        deleteAlt(head->next);

    }
};
