int findFrequency(vector<int> Arr, int X){
    // Your code here
    unordered_map<int,int>mp;
    int n  = Arr.size();
    
    for(int i = 0 ; i < n ; i++){
        mp[Arr[i]]++;
    }
    
    for(auto it : mp){
          if(it.first == X){
              return it.second;
          }
    }
   
   return 0;
    
}
