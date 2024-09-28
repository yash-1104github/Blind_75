class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
           if(str1.size() != str2.size()) return false;
           unordered_map<char,int>mp;
            for(int i =  0; i < str1.size() ; i++){
                mp[str1[i]]++;
           }
    
           int cnt = 0;
           for(int i =  0; i < str2.size() ; i++){
               if(mp.find(str2[i]) != mp.end()){
                   mp[str2[i]]--;
                   if(mp[str2[i]] == 0){
                       mp.erase(str2[i]);
                   }
               }
               else{
                    cnt++;
               }
           }
           if(cnt > k ) return false;
    
