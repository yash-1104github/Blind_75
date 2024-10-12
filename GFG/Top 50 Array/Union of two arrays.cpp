class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
        // code here
        int n = arr1.size(), m = arr2.size();
        int ans = 0;
        unordered_map<int,int>mp;
        
        for(int i = 0 ; i < n ; i++){
            mp[arr1[i]]++;
        }
        
        sort(arr2.begin(),arr2.end());
        ans = mp.size();
        int val;
        for(int j = 0 ; j < m ; j++){
            
            if(mp.find(arr2[j]) == mp.end() && val != arr2[j]){
                val = arr2[j];
                ans++;
            }
        }
        return ans;
    }
};
