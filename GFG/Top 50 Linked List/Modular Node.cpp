class Solution {
  public:
    int modularNode(Node *head, int k) {
        // Code here
        Node* curr = head;
        
        int cnt = 0;
        while(head != nullptr){
            head = head->next;
            cnt++;
        }
        
        if(cnt < k ) return -1;
        int idx = 1, ans = 0;
        
        while(curr != nullptr){
            if(idx%k == 0){
                ans = curr->data;
            }
            curr = curr->next;
            idx++;
        }
       return ans;
    }
};
