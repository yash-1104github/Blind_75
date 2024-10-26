class Solution {
  public:
    int GetNth(Node *head, int index) {
        // Code Here
        Node* curr = head;
        int cnt = 1;
        
        
        while(curr != nullptr){
            
            if(cnt == index){
                return curr->data;
            }
            
            cnt++;
            curr = curr->next;
        }
        return -1;   
    }
};
