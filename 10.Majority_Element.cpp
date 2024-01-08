#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)
{
   int n = arr.size();
   vector<int> ans;
   unordered_map<int,int>mpp;

   for(auto it: arr) mpp[it]++;
   for(auto it : mpp) if(it.second > n/3) ans.push_back(it.first);

   return ans;

}
