class Solution {
  public:
    // Function to find elements in the array that are equal to their index.
    vector<int> valueEqualToIndex(vector<int>& arr) {
        // code here
        
        vector<int>ans;
        int idx = 1;
        
        for(int i = 0; i < arr.size(); i++){
            
            if(arr[i] == idx){
                ans.push_back(idx);
            }
            
            idx++;
        }
        
        return ans;
        
    }
};
