class Solution
{
   public:
    string ReFormatString(string S, int K){    	
     	int n = S.size();
        string temp = "";        
        for(int i = 0 ; i< n ;i++){            
            if(S[i] != '-'){
             temp += toupper(S[i]);
            }
        }     
        string ans = "";
        int cnt = 0;     
        for(int i = temp.size()-1; i >= 0; i--){
            if(cnt == K){
                ans += '-';
                cnt = 0;
            }
              ans += temp[i];
              cnt++;
        }
         reverse(ans.begin(),ans.end());
      	return ans;
    }
};
