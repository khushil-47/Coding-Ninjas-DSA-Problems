int missingNumber(int n, vector<int> &arr){
   unordered_map<int,int>m;
   for(auto it: arr) m[it]++;
   for(auto it: m) if(it.second % 2 != 0) return it.first;
}
