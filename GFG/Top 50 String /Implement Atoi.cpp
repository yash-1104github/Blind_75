class Solution {
  public:
    /*You are required to complete this method */
    int atoi(string &s) {
        int n  = s.size();
         for(int i = 0 ; i < n ; i++){     
               char ch = s[i];     
             if(ch >= 65 && ch <= 90  ){
                   return -1;
             }    
            else if(ch >= 97 && ch <= 122 ){
                 return -1;
             }
        }        
        int key = 0 , ans = 0;
        for(int i = 0 ; i < n ; i++){      
            char ch = s[i];     
            if( ch == '-'){
                key = -1;
                continue;
            }      
            int digit = (ch - '0');
            ans = ans*10 + digit;
        }
        if(key == -1) {
            ans = -ans;
        }
        return ans;
    }
};
