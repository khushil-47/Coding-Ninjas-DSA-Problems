#include<bits/stdc++.h>
vector<int> countFrequency(int n, int x, vector<int> &nums){


map<int,int> mpp;
for(int i =0; i<n; i++)
{
   mpp[nums[i]] ++;

}
//to store the frequency
 vector<int> arr;
int i = 1;
while(i<=n)
{
   arr.push_back(mpp[i]);
   i++;
}

return arr;

}
