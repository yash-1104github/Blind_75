  class Solution {
  public:
    // Function to reverse a doubly linked list
    DLLNode* reverseDLL(DLLNode* head) {
        // Your code here
         
        stack<int>st;
        DLLNode* curr1 = head;
        DLLNode* curr2 = head;
       
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
}
