int findMin(vector<int>& arr)
{	int result = INT_MAX;
    int n = arr.size();
for(int i = 1; i<=n; i++){
	 //this loop will run loop n times
	
	/*if(n==arr.size()) //if n == arr.size() elements of array comes back to its original position
	{
	
		for(auto it: arr) {
		result = min(it, result); 
		return result;
	}*/

	for(int j = 1; j<=n; j++){ //this for loop will do rotation
    arr[i] = arr[i-1];//every element shifting to the right
	arr[0] = arr[n-1];//0th index will hold last value
	
   }

	}
	

   for(auto it: arr){
	   result = min(it, result);
   }
   return result;

}
