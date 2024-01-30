vector<int> rotateArray(vector<int>arr, int k) {
    vector<int>temp;
    k = k % arr.size();
    for(int i = 0; i<k; i++){
        temp.push_back(arr[i]);
    }//storing elements upto d-1 places 
    
    //now shifting
    for(int i = k ; i<arr.size(); i++){
        arr[i-k] = arr[i];
    }

    for(int i = arr.size()-k; i<arr.size(); i++){
        arr[i] = temp[i-(arr.size()-k)];
    } //pushing temp elements back in the array

    return arr;

}
