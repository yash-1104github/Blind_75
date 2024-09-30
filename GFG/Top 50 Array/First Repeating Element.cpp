//optimal
    // Function to return the position of the first repeating element.
    int firstRepeated(vector<int> &arr) {
        // code here
        
         int ans =  -1 ;
         int res = INT_MAX;
         int n = arr.size();
       
          unordered_map<int,int>mp;
          for(int i = 0 ; i < n ; i++){
              mp[arr[i]]++;
          }
        
    
         for(int i = 0 ; i < n  ; i++){
             if(mp[arr[i]] > 1){
                   return i+1;
             }
         }

        return -1;
        
            
         
    }
};











//TLE
 for(int i = 0 ; i < n ; i++){
            
             int num = arr[i];
             
             for(int j = i+1  ; j < n ; j++) {
                 if(num == arr[j]){
                     ans = i;
                     break;
                 }
                 if(ans != -1){
                     break;
                 }
             }
             if(ans != -1){
                 break;
             }
        }
       
        if (res == 0 ) return {-1};
        
        return  res+1 ;   
