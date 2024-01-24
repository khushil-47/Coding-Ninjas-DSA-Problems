vector<int> sortArrayByKBit(int n, int k, vector<int> &arr) {

vector<int> v1,v2;
for(int i = 0; i<n; i++){
    if( (arr[i] & 1 << k-1)!=0){
        v1.push_back(arr[i]);
    }
    else {
        v2.push_back(arr[i]);
    }

}

for(int i = 0; i<v1.size(); i++){

v2.push_back(v1[i]);

}
return v2;


}
