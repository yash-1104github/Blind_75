class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        //sort(arr.begin(),arr.end());
       int n = arr.size();
       int low = 0 , mid = 0 , high = n-1;
       
       while(mid <= high){
           if(arr[mid] == 0){
               swap(arr[low],arr[mid]);
               low++;
               mid++;
           }
           else if(arr[mid] == 2){
               swap(arr[mid],arr[high]);
               high--;
           }
          else  mid++;
       }
        
        
    }
};
