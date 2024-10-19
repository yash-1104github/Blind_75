class Solution {
  public:
    Node* findIntersection(Node* head1, Node* head2) {
        // code here
        
        TC = O(N+M)
        if(head1 == nullptr || head2 == nullptr){
            return nullptr;
        }
        
        Node* curr2 = head2 ;
        Node* curr1 = head1 ;
        
        vector<int>ans;
        unordered_map<int,int>mp;
        
        while(curr2 != nullptr){
            
            int val1 = curr2->data;
            mp[val1]++;
            curr2 = curr2->next;
      
        }
        
        while(curr1 != nullptr){
            
            int val2 = curr1->data;
            
            if(mp.find(val2) != mp.end()){
                ans.push_back(val2);
            }
            curr1 = curr1->next;
        }
    
        int n = ans.size();
 
        if(n == 0){
            return nullptr;
        }        
        
        Node* newhead = new Node(ans[0]);
        Node* tail  =  newhead;
        
        for(int i = 1 ;  i < ans.size(); i++){
            tail->next = new Node(ans[i]);
            tail = tail->next;
        }
        return newhead;
        
        
    //   TC =>  O(N*M)
    //     if(head1 == nullptr || head2 == nullptr){
    //         return nullptr;
    //     }
        
    //   Node* curr1 = head1;
    //   vector<int>ans;
      
        
    //     while(curr1 != nullptr){
            
    //          Node* curr2 = head2;
             
    //         while(curr2 != nullptr){
    //              if(curr2->data == curr1->data){
    //                 ans.push_back(curr1->data);
    //                 break;
    //              }
    //         curr2 = curr2->next;
    //     }
    //         curr1 = curr1->next;
    //     }
        
    //     int   n = ans.size();
        
    //      if(n == 0){
    //         return nullptr;
    //      }
        
    //     Node* newhead = new Node(ans[0]);
    //     Node* tail  =  newhead;
        
    //     for(int i = 1 ;  i < ans.size(); i++){
    //         tail->next = new Node(ans[i]);
    //         tail = tail->next;
    //     }
        
    //     return newhead;
        
    }
};
