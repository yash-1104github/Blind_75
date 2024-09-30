class Solution{
    public:
   
    void convertToWave(int n, vector<int>& arr){
        
         // Your code here
         int i = 0 , j = 1;
         
         while(i < n && j < n){
            swap(arr[i],arr[j]);
            i = i + 2;
            j = j + 2;
         }
        
    }
};
