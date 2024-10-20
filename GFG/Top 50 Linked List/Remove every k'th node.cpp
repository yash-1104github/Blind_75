class Solution {
  public:
    Node* deleteK(Node* head, int k) {
        // code here
        vector<int>a;
        a.push_back(-1);
        Node* curr = head;
        
        while(curr != nullptr){   
            a.push_back(curr->data);
            curr  = curr->next;  
        }
        
        Node* newhead = new Node(-1);
        Node* tail = newhead;
        //arr is 0 based-idexing
        for(int i = 1 ; i < a.size(); i++){
            if(i % k == 0){
              continue;
            }
               tail->next = new Node(a[i]);
               tail = tail->next;
        }
        return newhead->next;
    }
};
