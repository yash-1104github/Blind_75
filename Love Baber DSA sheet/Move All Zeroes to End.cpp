class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        int n = arr.size();
        
        int i = 0 , cnt = 0;
        
        for(int i = 0; i < n; i++){
            
            if(arr[i] != 0){
                arr[cnt] = arr[i];
                cnt++;
            }   
        }
        
        while(cnt < n){
            arr[cnt] = 0;
            cnt++;
        }   
    }
};
