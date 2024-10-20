class Solution {
  public:
    Node* linkdelete(Node* head, int n, int m) {
        // code here
        Node* curr = head;
        
        int cnt = 0, feq = n;
        while(curr != nullptr){
              cnt++;
            if(cnt == m && curr->next != nullptr){
                Node*temp = curr->next;
                while(feq > 0 && temp != nullptr){
                    temp = temp->next;
                    feq--;
                }
                curr->next = temp;
                cnt = 0;
                feq = n;
            }
            curr = curr->next;
        }
        
        if(cnt <= m ){
            return head;
        }
        
    }
};
