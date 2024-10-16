class Solution {
  public:
    bool isCircular(Node *head) {
        // Your code here
         if(head == NULL){
            return true;
        }
        
********approch 1******

        // unordered_map<Node*,int>mp;
        // int cnt = 1;
        
        // while(head){
     
        //     if(mp.find(head) != mp.end()){
        //         return true;
        //     }
            
        //     mp[head] = cnt;
        //     cnt++;
        //     head = head->next;
         
        // }
        // return false

********approch 2******

         if(head == NULL){
            return true;
        }
        Node* slow = head;
        Node* fast = head;
        
        while(fast != nullptr  && fast->next != nullptr){
            
             slow = slow->next;
             fast = fast->next->next;
            
            if(slow == fast){
                return true;
            }
        }
        return false; 
    }
};
