class Solution {
  public:
    int findMin(vector<int>& arr) {
        // complete the function here
        int ans = *min_element(arr.begin(),arr.end());
        return ans;
    }
};
