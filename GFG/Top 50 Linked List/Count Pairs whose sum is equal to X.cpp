class Solution {
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        // Code here
        
        if(head1 == nullptr || head2 == nullptr){
            return 0;
        }
        
        Node* curr1 = head1 ;
        Node* curr2 = head2 ;
        
        
        unordered_map<int,int>mp;
        
        while(curr2 != nullptr){
          int val2 = curr2->data;
          mp[val2]++;
          curr2 = curr2->next;  
        }
        
        int cnt = 0;
        
        while(curr1 != nullptr){
            int val1 = curr1->data;
            int ans = x-val1;
            
            if(mp.find(ans) != mp.end()){
                cnt++;
            }
            
            curr1 = curr1->next;
        }
        
        return cnt;
    }
};
