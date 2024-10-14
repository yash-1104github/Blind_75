class Solution{
  public:
    string convertToRoman(int n) {
        // code here
        vector<pair<int, string>> v = {
            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
            {100, "C"}, {90, "XC"}, {50, "L"}, {40, "XL"},
            {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"}
        };
        
        string ans;
        
        for(int i = 0 ; i < v.size(); i++){
            
            while(n >= v[i].first){
                ans += v[i].second;
                n = n-v[i].first;
            }
        }
         
      return ans;
    }
};
