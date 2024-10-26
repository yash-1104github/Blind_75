class Solution {
  public:
    int fractional_node(struct Node *head, int k) {
        // your code here
        if(head ==  nullptr){
            return -1;
        }
        
        Node* curr = head;
      
        int cnt = 0;
        
        while(curr != nullptr){
            cnt++;
            curr = curr->next;
        }
 
        int num = ceil(double(cnt*1.0/k*1.0));
        curr = head;
        num--;
        
      while(num > 0){
          num--;
          curr = curr->next;
      }
      return curr->data;
      
    }
};
