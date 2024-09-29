class Solution{
  public:
    vector<vector<string>> Anagrams(vector<string>& string_list) {
        //code here
        vector<vector<string>>ans;
        
        unordered_map<string,vector<string>>mp;
        for(int i = 0 ; i < string_list.size() ; i++){
            
            string temp = string_list[i];
            sort(string_list[i].begin(),string_list[i].end());
            mp[string_list[i]].push_back(temp);
            
        }
        
        for(auto it : mp){
            vector<string>res = it.second;
            ans.push_back(res);
        }
        return ans;
    }
};
