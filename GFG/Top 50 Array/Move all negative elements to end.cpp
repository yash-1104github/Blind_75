class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // Your code goes here
        int n = arr.size();
        int i = 0 , j = 0 , k = 0;
        vector<int>posi;
        vector<int>negi;
        for(int i = 0 ; i < n; i++){
            if(arr[i] >= 0){
                posi.push_back(arr[i]);
            }
            else{
                negi.push_back(arr[i]);
            }
        }
        while(i < posi.size()){
            arr[k] = posi[i];
            k++;
            i++;
        }
        while(j < negi.size()){
            arr[k] = negi[j];
            k++;
            j++;
        }
    }
};
