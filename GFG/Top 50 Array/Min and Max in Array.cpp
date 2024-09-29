//optimal
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        long long max = *max_element(arr.begin(),arr.end());
        long long min = *min_element(arr.begin(),arr.end());
        
        return {min,max};
    }
};

//runtime error
class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        
        int n = arr.size();
        sort(arr.begin(),arr.end());
        
        long long min = arr[0];
        long long max = arr[n-1];
        
        return {min,max};
    }
};
