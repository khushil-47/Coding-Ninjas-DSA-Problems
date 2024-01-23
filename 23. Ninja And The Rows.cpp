#include <bits/stdc++.h> 
int maximumWeightRow(int n, int m, vector<vector<int>> &mat) {

int result = INT_MIN;
for(int i = 0; i<n; i++){
    int sum = 0; //as every new row summation will calculated from 0
    for(int j = 0; j<m; j++){
        sum+=  mat[i][j];
    }
    result = max(result, sum);
}

return result;

}
