#include <bits/stdc++.h> 
long long evenSumTillN(int n) {
   if (n==0) return 0;
   long long int sum = 0;
   for(int i = 0; i<=n; i++){
       if(i%2==0){
           sum+=i;
       }
   }
   
   return sum;
}
