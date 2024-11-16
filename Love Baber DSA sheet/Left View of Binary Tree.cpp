class Solution {
   public:
   
     vector<int>ans;
     
     void inorder(Node* root, int level){
        
        if(root==nullptr){
            return;
        } 
       
        if(level == ans.size()){
            ans.push_back(root->data);
        }
        inorder(root->left,  level+1); 
        inorder(root->right , level+1);     
    }
    
    vector<int> leftView(Node *root) {
        // code here
        inorder(root, 0);
        return ans;
    }
};
