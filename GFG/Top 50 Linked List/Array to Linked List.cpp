class Solution {
  public:
    Node* constructLL(vector<int>& arr) {
        // code here
        Node* head = new Node(arr[0]);
        Node* tail = head;
        
        for(int i = 1; i < arr.size(); i++){ 
            tail->next = new Node(arr[i]); 
            tail = tail->next;  
        }
        return head;
    }
};
