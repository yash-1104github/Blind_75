class Solution {
  public:
    void display(Node *head) {  
      Node* curr = head; 
      while(curr != NULL){ 
            cout << curr->data;
            cout << ' ';
            curr = curr->next;
      } 
    }
};
