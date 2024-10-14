class Solution{
  public:
    int isdivisible7(string num){
        //complete the function here
        int val = 0;
        for(int i = 0 ; i < num.size(); i++){
            int digit = num[i]-'0';
            val = (val*10 + digit)%7;
        }
        
        if(val == 0) {
        return 1;
         }
         else{
         return 0;
        }
    }
};
