// Print All Subsets
void solve(vector<int> arr, vector<int> ds, int ind, int n){

    if(ind >= n){

        for(int i = 0; i < ds.size(); i++){

            cout << ds[i] << " ";

        }

        cout << endl;
     return;

    }

    solve(arr, ds, ind+1, n);
    ds.push_back(arr[ind]);
    solve(arr, ds, ind+1, n);

}

void printAllSubsets(int n, vector<int> &arr){

      vector<int> ds;
     solve(arr, ds, 0, n);
   
}
