int singleNonDuplicate(vector<int>arr){
int n = arr.size();
int result  = 0;
for(int i =0; i<n; i++){
if(n==1){
result = arr[0]; //since  there is only 1 element in vector
}
  else if(arr[i]==arr[i+1]){
  i++;
  }

  else{
    result = arr[i];
  }

}
  return result;
  
   
 }
