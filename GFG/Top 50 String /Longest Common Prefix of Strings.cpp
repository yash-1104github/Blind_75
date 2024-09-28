class Solution {
  public:

    string longestCommonPrefix(vector<string> arr) {
        // your code here
         string temp = "";
         temp = arr[0];
        int n = arr.size(), cnt=0;
        for(int i = 1 ; i < n; i++){
            string str = arr[i];
            
            for(int j = 0; j  < str.size(); j++){
                if(str[0] != temp[0]) {
                  //if no word match 
                    cnt = -1;
                    break;
                }
               else  if(str[j] != temp[j]){
                    temp = str.substr(0,j);
                    break;
                }
                else if(j == str.size()-1){
                    temp = str.substr(0,j+1);
                }
            }
          
        }
      if(cnt == -1 ) return "-1";
        return temp;
    }
};
