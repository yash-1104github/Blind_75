class Solution {
  public:
    void rearrange(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int>posi;
        vector<int>negi;
        
        for(int i = 0 ; i < n ; i++){
            if(arr[i] >= 0){
                posi.push_back(arr[i]);
            }
            else{
                negi.push_back(arr[i]);
            }
        }
        
        int i = 0 , j = 0 , k = 0;
        
        while(i < posi.size() && j < negi.size()){
              arr[k] = posi[i];
              k++;
              i++;
              arr[k] = negi[j];
              k++;
              j++;
        }
        
        while( j <   negi.size()){
              arr[k] = negi[j];
              k++;
              j++;
        }
        
        while( i <   posi.size()){
              arr[k] = posi[i];
              k++;
              i++;
        }
      
    }
};
