class Solution {
  public:
    vector<int> sumClosest(vector<int>& arr, int k) {
        // code here
        int n = arr.size(), diff = INT_MAX;
        int i = 0 , j = n-1 , l_idx = 0 , r_idx = 0;
        
        while(i < j){
            
            if(abs(arr[i]+arr[j]-k) < diff){
                l_idx = i;
                r_idx = j;
                diff = abs(arr[i]+arr[j]-k);
            }
            
            if(arr[i]+arr[j] > k){
                j--;
            }
            
            else{
                i++;
            }
        }
        
        vector<int>ans;
        ans.push_back(arr[l_idx]);
        ans.push_back(arr[r_idx]);
        
        return ans;        
    }
};
