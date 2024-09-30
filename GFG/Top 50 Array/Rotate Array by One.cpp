class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        
        int n = arr.size();
        // int i = n-1 , j = n-2;
        
        //  while(i>= 0 && j>=0){
            
        //     swap(arr[i],arr[j]);
        //     i--;
        //     j--;
        //  }
        
        int j = n-1,i=0;
        
        while(i < j){
            
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            
            i++;
        }
      
    }
};
