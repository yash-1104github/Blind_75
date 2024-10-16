class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
        // Code here
        if(head == NULL){
            return 0;
        }

    //  approch 1 
     Node* slow = head;
     Node* fast = head->next;
      
      int cnt = 1;
      
     while(fast != nullptr && fast->next != NULL){
          
         if(slow == fast){
             Node* curr = slow->next;
            
        while(curr != slow){
              cnt++;
              curr = curr->next;
          }            
            return cnt;
        }
        
         slow = slow->next;
         fast = fast->next->next;
     }
    
 //approch - 2
    unordered_map<Node*, int>mp;
    
      int cnt = 1;
      while(head){
          
        if(mp.find(head) != mp.end()){
            return cnt - mp[head];
        }
        
        mp[head] =  cnt;
        cnt++;
        head = head-> next;
        
     }
    
    
      return 0;  
    }
};
