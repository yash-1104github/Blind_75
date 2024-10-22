class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    int ans = INT_MAX;
    sort(a.begin(),a.end()); 
    int  i = 0 , j = m-1;
    
    while(j < n){
        int diff = a[j] - a[i];
        ans = min(ans,diff);
        i++;
        j++;
    }
     return ans;
    }   
};
