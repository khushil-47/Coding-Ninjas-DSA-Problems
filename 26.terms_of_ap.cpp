#include <bits/stdc++.h> 
#include <vector>

vector < int > termsOfAP(int x) {
  

   int j=1;

    vector<int>ans;

   int count=0;

   while(count<x){

       int p=(3*j)+2;

       if(p%4!=0){

           ans.push_back(p);

           j++;

           count++;

       }else {

           j++;

       }

   }

    return ans;

}
