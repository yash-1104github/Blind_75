class Solution {
  public:
    // Function to count nodes of a linked list.
    int getCount(struct Node* head) {

        int cnt  = 1;
         
         if(head == NULL){
             return 0;
         }
         
        while(head->next != nullptr){
            head = head -> next;
            cnt++;
        }
         
         return cnt;
        
    }
};
