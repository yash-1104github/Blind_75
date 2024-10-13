class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        if(str1.size() != str2.size()) return 0;
        
        unordered_map<char,char>mp1;
        unordered_map<char,char>mp2;
        
        int n = str1.size();
        
        for(int i = 0 ; i < n ; i++){
            
            char ch1 = str1[i];
            char ch2 = str2[i]; 
            
    if(mp1.find(ch1) != mp1.end() && mp1[ch1] != ch2  ||
       mp2.find(ch2) != mp2.end() && mp2[ch2] != ch1){
         return 0;
    }
            
            
            mp1[ch1] = ch2;
            mp2[ch2] = ch1;
        }
        return 1;
    }
};
