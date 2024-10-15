class Solution {
  public:
    Node *removeDuplicates(Node *head) {
        // your code goes here
        if(head == NULL || head -> next == NULL){
            return head;
        }
        unordered_set<int>st;      
        Node* curr  = head->next;      
        Node* head2 = new Node(head->data);      
        Node* tail = head2;     
        st.insert(head->data);
        
        while(curr != NULL){             
                int val = curr->data;             
                if(st.find(val) == st.end()){
                    st.insert(val);
                    tail->next = new Node(val);
                    tail = tail -> next; 
                }
                else{
                     curr = curr-> next;     
                }
        }
       return  head2; 
    }
};
