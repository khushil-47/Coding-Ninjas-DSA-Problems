//Minimum Sum Subarray Of Given Size
#include <bits/stdc++.h> 
int minSubarraySum(int arr[], int n, int k) 
{

int result = INT_MAX;
int sum = 0;

for(int i = 0; i<k; i++){
    sum+= arr[i];
}
result = min(result, sum);

for(int i= k; i<n; i++){
    sum = sum + arr[i] - arr[i-k];

result =  min(result, sum);
}

return result;


}
