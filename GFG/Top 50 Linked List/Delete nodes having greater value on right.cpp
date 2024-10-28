class Solution {
  public:
    Node *compute(Node *head) {
        // your code goes here
        if(head->next == nullptr){
            return head;
        }
        vector<int>arr;
        Node* curr = head;
        
        while(curr != nullptr){
            arr.push_back(curr->data);
            curr = curr->next;
        }
        
        vector<int>ans;
        for(int i = 0 ; i < arr.size(); i++){
            bool flag = false;
            for(int j = i+1 ; j < arr.size(); j++){
                if(arr[j] > arr[i]){
                    flag = true;
                    break;
                }
            }
            if(!flag){
                ans.push_back(arr[i]);
            }
        }
       
        Node* head1 = new Node(ans[0]);
        Node* tail = head1;
        
        for(int i = 1 ; i < ans.size(); i++){
            tail->next = new Node(ans[i]);
            tail = tail->next;
        }
        return head1;   
    }
};
