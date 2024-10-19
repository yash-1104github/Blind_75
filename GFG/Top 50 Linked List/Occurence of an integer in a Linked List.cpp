class Solution {
  public:
    int count(struct Node* head, int key) {
        // add your code here
        if(head == nullptr){
            return 0;
        }
        
        Node* curr = head;
        int cnt = 0;
        
        while(curr != nullptr){
            
            int val = curr->data;
            
            if(val == key){
                cnt++;
            }
            
            curr = curr->next;
        }
        
        return cnt;
        
    }
};
