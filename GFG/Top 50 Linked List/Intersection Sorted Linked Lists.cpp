class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code goes here.
        vector<int>arr;
        Node* curr1 = head1;
        Node* curr2 = head2;
        
        while(curr1 != nullptr && curr2 != nullptr){

            if(curr1->data == curr2->data){
                arr.push_back(curr2->data);
                curr1 = curr1->next;
                curr2 = curr2->next;
            }
            else if(curr1->data < curr2->data){
                curr1 = curr1->next;
            }
            else{
                curr2 = curr2->next;
            }
        }
        
        int n = arr.size();
        if(n == 0 ) return nullptr;
        
        Node* head = new Node(arr[0]);
        Node* tail = head;
        
        for(int i = 1; i < n; i++){
            tail->next = new Node(arr[i]);
            tail = tail->next; 
           } 
        return head;
    }
};
