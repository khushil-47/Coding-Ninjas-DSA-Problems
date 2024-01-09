#include <bits/stdc++.h> 
void sortOddEven(vector<int>& nums){
    vector<int>odd;
    vector<int>even;
     int n = nums.size();
     for( int i=0; i<n; i++) {
         if(nums[i]%2==0) 
         {
             even.push_back(nums[i]);
         }

         else {
             odd.push_back(nums[i]);
         }
     }
 nums.clear(); //empty the vector
     sort(odd.begin(),odd.end(), greater<int>());
   // for(auto it: odd) nums.push_back(odd[it]);
     for(int i = 0; i<odd.size(); i++){
         nums.push_back(odd[i]);
     }
     
     sort(even.begin(), even.end());
    // for(auto it: even) nums.push_back(even[it]);
     
     for(int i = 0; i<even.size(); i++){
         nums.push_back(even[i]);
     }
    
   

}
