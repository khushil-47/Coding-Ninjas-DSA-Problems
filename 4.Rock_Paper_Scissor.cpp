#include <bits/stdc++.h> 
vector < int > rockPaperScissor(int k, string nezuko, string zenitsu) {
   
  int cnt1 = 0, cnt2 = 0, i = 0, j = 0, n = nezuko.size();
  int m=zenitsu.size();
    while(k>0){
        if(nezuko[i]==zenitsu[j]){
          //using modulo so that i and j don't go out of bound . 
          i=(i+1)%n;
            j=(j+1)%m;
            k--;
            continue;
        }
        if((nezuko[i]=='R' && zenitsu[j]=='S') || (nezuko[i]=='S' && zenitsu[j]=='P') || (nezuko[i]=='P' && zenitsu[j]=='R'))cnt1++;
        else cnt2++;
        i=(i+1)%n;
        j=(j+1)%m;
        k--;
    }
    return {cnt1,cnt2};

}
