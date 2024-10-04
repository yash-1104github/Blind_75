class Solution {
  public:
    string reverseString(string& s) {
        // Your code goes here
         int n = s.size();
        
        //reverse(s.begin(),s.end());
       
        for(int i = 0 ; i < n/2 ; i++){
            swap(s[i],s[n-i-1]);
        }
        
        // int   l = 0 , r = n-1;
        // while(l <  r){
        //     swap(s[l],s[r]);
        //     l++;
        //     r--;
        // }
    
        return s;
    }
};
