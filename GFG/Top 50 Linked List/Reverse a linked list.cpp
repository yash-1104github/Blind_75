class Solution {
  public:
    // Function to reverse a linked list.
    struct Node* reverseList(struct Node* head) {
       
        stack<int>st;
        Node* curr1 = head;
        Node* curr2 = head;
       
        while(curr1 != nullptr){
            st.push(curr1->data);
            curr1 = curr1->next;
        }
        
        while(!st.empty()){
            int val = st.top();
            curr2->data = val;
            curr2 = curr2->next;
            st.pop();
        }
        
          // return head of reversed list
           return head;
    }
};
