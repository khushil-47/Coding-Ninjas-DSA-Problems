void Return(int x,vector<int>&ans){

    if(x==1) {
     ans.push_back(1);
        return;
    }
    ans.push_back(x);
    Return(x-1, ans);
    
}

vector<int> printNos(int x) {

    vector<int>ans;
    Return(x,ans);
    sort(ans.begin(),ans.end(), greater<int>());
    return ans;

}
