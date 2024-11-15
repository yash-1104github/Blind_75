class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    
   bool isvalid(Node* root , long minval, long maxval){
       
       if(root == nullptr){
           return true;
       }
       
       if(root->data <= minval || root->data >= maxval){
           return false;
       }
       
       return isvalid(root->left, minval, root->data) &&
              isvalid(root->right, root->data, maxval);        
   }
    
    bool isBST(Node* root) {
        // Your code here    
       return isvalid(root, INT_MIN, INT_MAX);
    }
};
