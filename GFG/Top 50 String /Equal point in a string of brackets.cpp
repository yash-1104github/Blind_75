class Solution {
  public:

    long findIndex(string& str) {
      
        int cnt=0;
           for(int i=0;i<str.size();i++){
               if(str[i]==')'){
                   cnt++;
               }
           }
           return cnt;
    }
};
