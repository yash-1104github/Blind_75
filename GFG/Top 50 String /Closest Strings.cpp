class Solution{
public:	
	
	int shortestDistance(vector<string> &s, string word1, string word2){
		// Your code goes here 	
		int n = s.size();
		int cnt = 0, a = -1, b = -1 , ans = INT_MAX;
	 	
	    for(int  i = 0 ; i < n ; i++){
	        
	        if(s[i] == word1){
	             a = i;
	        }
	        
	        if(s[i] == word2){
	             b = i;      
	        }
	        
	        if(a != -1 && b != -1 ){
	         cnt = abs(b-a);
	         ans = min(ans,cnt);
	        }
	    }	 
	    return ans;	
	}
};
