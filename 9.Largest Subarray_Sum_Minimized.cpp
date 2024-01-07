int no_of_sub_arrays(vector<int> &a, int maxsum){
   int n = a.size();
   int subarray_sum = 0;
   int count = 1;
    for (int i = 0; i < n; i++) {
        if (subarray_sum + a[i] <= maxsum) {
            //insert element to current subarray
            subarray_sum += a[i];
        }

        else {
           subarray_sum = a[i];
           count++;
        }
    } 
    return count;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
   
   int low = *max_element(a.begin(), a.end());
   int high = accumulate(a.begin(), a.end(),0);

   
   while(low<=high){
int mid = (low+high)/2;
int x = no_of_sub_arrays(a, mid);
if(x>k){
   low = mid+1;
}
else{
   high = mid-1;
}
   
}

   return low;

}
