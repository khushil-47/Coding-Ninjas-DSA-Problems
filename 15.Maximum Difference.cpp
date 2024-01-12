#include <bits/stdc++.h> 
string maximumDifference(int n, vector<int>& arr)
{
	
    int max_diff = *max_element(arr.begin(), arr.end());
   
    int min_diff = *min_element(arr.begin(), arr.end());
	//checking if result is odd or even
	int diff = max_diff - min_diff;
	if(diff%2==0) {
		return "EVEN";
	}
	else {
		return "ODD";
	}

}
