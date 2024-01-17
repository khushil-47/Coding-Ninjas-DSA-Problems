#include <bits/stdc++.h> 
vector<int> sweet(vector<int> S)
{
	stack<int>st;
    int n = S.size();
    vector<int>result(n,0);
    for(int i = 0; i<n; i++){
        st.push(i+1);
        while(!st.empty() && (S[i]> i+1 - st.top()) ){
              result[st.top()-1] = 1;
              st.pop();
        }
    }
    return result;
}
