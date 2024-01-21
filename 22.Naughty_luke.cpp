#include <bits/stdc++.h> 
vector<vector<int>> getFinalGrid(vector<vector<int>> &a, int n) {
  
    for( int i = 0; i<n; i++){
    for(int j = 0; j<n/2; j++){
           swap(a[i][j],a[i][n-1-j]);
           
    }
    }

    for(int i = 0 ; i<n; i++){
    for(int j = 0; j<n; j++){
       a[i][j]^=1;
        
    }
    }


return a;

}
