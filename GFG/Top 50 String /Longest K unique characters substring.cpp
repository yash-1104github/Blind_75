//optimal solution
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
      int n = s.size();
    unordered_map<char,int>mp;
    int  l = 0, r = 0, ans = -1;
    while(r < n){

        mp[s[r]]++;
        
        while(mp.size() > k){
              mp[s[l]]--;
              if(mp[s[l]] == 0){
                  mp.erase(s[l]);
              }
              l++;
        }
        if(mp.size() == k){
            ans = max(ans , r-l+1);
        }
            r++;
    }
    return ans; 
    }
};


//runtime error unnecessary set clean and reinisialize
class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int n = s.size();
    unordered_set<char>st;
    int  l = 0, r = 0, ans = 0;
    while(r < n){
        
        if(st.find(s[r]) == st.end()){
            if(st.size() <  k){
                st.insert(s[r]);
           }
           else{
                ans = max(r-l,ans);
                r = l;
                st.clear();
                st.insert(s[r]);
           }
        }
            r++;
    }
    return ans; 
    }
};
