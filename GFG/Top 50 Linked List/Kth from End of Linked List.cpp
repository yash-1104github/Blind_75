class Solution {
  public:
    int getKthFromLast(Node *head, int k) {
        // Your code here
        Node* curr = head;
        
        int cnt = 0;
        //find  total no of nodes
        while(curr != NULL){
            curr = curr->next;
            cnt++;
        }
        
        if(cnt < k) return -1;
        
        int idx = cnt - k ;
        //find val of idx
        while(idx != 0){
            head  = head->next;
            idx--;
        }
        return head->data;
    }
};
