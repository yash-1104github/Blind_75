class Solution
{
    public:
    
    vector<int>ans;
    
    void traversal(Node *root, int level){
    
        if(root==nullptr){
            return;
        }
        
        if(level == ans.size()){
            ans.push_back(root->data);
        }
        
        traversal(root->right, level+1);
        
        traversal(root->left, level+1);
        
        
    }
    
    
    
    //Function to return list containing elements of right view of binary tree.
    vector<int> rightView(Node *root)
    {
       // Your Code here
       traversal(root, 0);
       
       return ans;
    }
};
