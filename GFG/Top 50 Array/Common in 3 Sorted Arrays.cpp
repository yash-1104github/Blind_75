class Solution {
  public:
    // Function to find common elements in three arrays.
        vector<int> commonElements(vector<int> &arr1, 
                        vector<int> &arr2,vector<int> &arr3) {
                            
       int u = arr1.size(), n = arr2.size(), l = arr3.size();
       int i = 0 , j = 0 , k = 0;
       
       vector<int>res;
       int last = INT_MIN;
       
       while(i < u && j < n && k < l){
           if(arr1[i] == arr2[j] && arr1[i] == arr3[k] && arr1[i] != last){
               res.push_back(arr1[i]);
               last = arr1[i];
               i++;
               j++;
               k++;
           }

            else if (arr1[i] < arr2[j]){
                i++;
            }       
            
            else if (arr2[j] < arr3[k]){
                j++;   
            }
    
           else 
               k++;
       } 
       
        return res;
    }
};
