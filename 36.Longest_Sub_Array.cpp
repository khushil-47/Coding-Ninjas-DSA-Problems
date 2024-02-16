//longest subarray with sum 0
#include<bits/stdc++.h>
int  getLongestZeroSumSubarrayLength(vector<int> &arr){
int prefix_sum = 0;
int maxi = 0;  
  map<int,int>mpp;
  for(int i = 0; i<arr.size(); i++){
  prefix_sum+= arr[i];
    if(prefix_sum == 0) maxi = i+1;
    else{ 
       if(mpp.find(prefix_sum) != mpp.end() ) {
         maxi = max(maxi, i - mpp[prefix_sum]);
       }
      else { 
         mpp[prefix_sum] = i;
      }
    }
  }
  return maxi;
}
