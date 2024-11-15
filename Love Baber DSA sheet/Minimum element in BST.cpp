class Solution {
  public:
    
       vector<int>ans;
    
       void inorder(Node* root){
         if(root == nullptr){
            return ;
         }
        
        
        inorder(root->left);
        
        ans.push_back(root->data);
        
        inorder(root->right);
        
     }
  
  
    int minValue(Node* root) {
        // Code here
       inorder(root);
      
        int res = *min_element(ans.begin(), ans.end());
       
       return res;
       
    }
};
