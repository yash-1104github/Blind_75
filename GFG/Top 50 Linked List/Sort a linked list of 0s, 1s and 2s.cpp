class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {
          
         if(head == NULL){
             return nullptr;
         }

        // Add code here
        // unordered_map<Node *,int>mp;
        // //int  cnt = 0;
        // while(head != nullptr){
        //     mp[head]++;
        //     head = head->next;
        // }
        
        // Node* head2 = new Node(0);
        // Node* tail  = head2;
        
        // for(auto it : mp){
        //     while(it.second != 0){
        //         tail->next = new Node(it.second);
        //         tail = tail -> next;
        //         it.second--;
        //     } 
        // }
        
        // return head2->next;

**********approch 2***********
        vector<int>num(3,0);
        Node* curr = head;
        
        while(curr != NULL){   
              num[curr->data]++;
              curr = curr->next;
        }
        curr = head;
        int i = 0;

        //Reinsialize the linked instead of cretind new LL
        while(curr != nullptr){
            if(num[i] == 0){
                i++;
            }
            else{
               curr->data = i;
               num[i]--;
               curr = curr->next;
            }
        }
        return head;
    }
};
