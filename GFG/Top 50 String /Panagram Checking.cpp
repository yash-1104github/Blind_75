class Solution
{
  public:
    //Function to check if a string is Pangram or not.
    bool checkPangram (string s) {
        // your code here
       vector<int>ans(26,0);
       int n = s.size();
       
       for(int i = 0 ; i < n ; i++){
           
           char ch = s[i];
           if(ch >= 65 && ch <= 90){
               ans[ch-'A']++;
           }
           
           else if(ch >= 97 && ch <= 122){
               ans[ch-'a']++;
           }
       }
       
       for(int i = 0 ; i < 26 ; i++){
           if(ans[i] == 0){
               return false;
           }
       }
       return true;
    }
};
