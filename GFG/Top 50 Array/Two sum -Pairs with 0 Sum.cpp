class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        int n = arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        int l = 0 , r = n-1;
        
        while(l < r){
            int sum = arr[l] + arr[r];
            if(sum < 0 ){
                l++;
            }
            else if(sum > 0){
                r--;
            }
            else if(sum == 0) {
                ans.push_back({arr[l],arr[r]});
                l++ ;
                r-- ;
                
                //to ensure repeating pairs will not occur at first idx
                while(l < r && arr[l] == ans.back()[0]) {
                    l++;
                }
                //to ensure repeating pairs will not occur at second idx
                while(l < r && arr[l] == ans.back()[1]) {
                    l++;
                }
                
            }
        }
        
        return ans; 
        
    }
};
