class Solution {
  public:
    int findEquilibrium(vector<int>& arr) {
        // code
        int n = arr.size() , sum = 0;
        
        for(int i = 0 ; i < n ;i++){
            sum += arr[i];
        }
        int left = 0;
        for(int i = 0;i < n ; i++){
            sum = sum - arr[i];
           
            if(sum == left){
                return i;
            }
             left += arr[i];
            
        }
        return -1;
        
    //     int leftSum = 0, rightSum = 0;
         
    //     for(int i = 1 ; i < n-1 ; i++){
    //           leftSum += arr[i-1];
    //           rightSum = accumulate(arr.begin()+i,arr.end()+i,0);
    //          if(leftSum == rightSum){
    //              return i;
    //          }
    //     } 
             
    //   return -1;
    }
};
