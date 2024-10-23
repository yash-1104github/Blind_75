class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        // Code here
        Node *temp = *head; 
        if(temp == NULL)return true;
        if(temp->next == NULL) return false;
        int cnt = 0;
        while(temp != nullptr){
            temp = temp->next;
            cnt++;
        }  
        if(cnt%2 == 1) return false;   
        return true; 
    }
};
