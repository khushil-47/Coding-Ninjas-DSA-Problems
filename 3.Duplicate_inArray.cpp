#include <bits/stdc++.h>

int findDuplicate(vector<int> &arr, int n){

//sorting an array
sort(arr.begin(),arr.end());

int i =0;
while(i<n)
{
	if(arr[i]==arr[i+1])
	{
		return arr[i];
	}

	i++;
}

}
