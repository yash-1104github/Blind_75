class Solution {
  public:
    // Should return head of the modified linked list
    Node* sortedInsert(struct Node* head, int x) {
        // Code here
        Node* curr = head;
        
        if(x <= curr->data){
            Node* newhead =new Node(x);
            newhead->next = head;
            return newhead;
        }
      
        while(curr != nullptr && curr->next != nullptr){
            
            if(curr->data < x && x <= curr->next->data){
                
                Node* temp =  curr->next;
                
                curr->next = nullptr;
                Node* temp1 = new Node(x);
                curr->next = temp1;
                temp1->next = temp;
                   
                return head;
            }
           
            curr = curr->next;
        }
        
        if(curr->next == nullptr){
            Node* newtail = new Node(x);
            curr->next = newtail;
            return head;
        }

      
        // vector<int>ans;
        // Node* curr = head;
        
        // while(curr != nullptr){
        //     ans.push_back(curr->data);
        //     curr = curr->next;
        // }
        
        // ans.push_back(x); 
        // sort(ans.begin(),ans.end());
        
        // Node* head2 = new Node(ans[0]);
        // Node* tail = head2;
    
        // for(int i = 1 ; i < ans.size(); i++){
        //     tail->next = new Node(ans[i]);
        //     tail = tail->next;
        // }
        // return head2;
        
    }
};
