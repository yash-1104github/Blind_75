class Solution {
  public:
    string encryptString(string S) {
        // code here
        unordered_map<int,char>mp1 = {
            { 0 , '0' },
            { 1 , '1' },
            { 2 , '2' },
            { 3 , '3' },
            { 4 , '4' },
            { 5 , '5' },
            { 6 , '6' },
            { 7 , '7' },
            { 8 , '8' },
            { 9 , '9' },
            { 10 , 'a'},
            { 11,  'b'},
            { 12 , 'c'},
            { 13 , 'd'},  
            { 14 , 'e'},  
            { 15 , 'f'} 
        };
        
        int n = S.size();
        
        string temp;
        map<char,int>mp2;
        
        for(int i = 0 ; i < n ; i++){
            mp2[S[i]]++;
        }
        
        for(auto it : mp2){
            
            temp =  temp + it.first; 
            temp = temp +  mp1[it.second] ;
            
        }
        
       reverse(temp.begin(),temp.end());
        
        return temp;
        
    }
};
