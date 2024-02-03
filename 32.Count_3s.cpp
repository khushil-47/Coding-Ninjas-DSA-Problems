
#include <bits/stdc++.h> 
long long int countOf3(int x) {
     long long cnt = 0;
     for(int i = 0; i<=x; i++)
{
     if(i==3) cnt++;
     else{
          int num = i;
          while(num!=0){
               int check = num%10;
               if(check == 3) cnt++;
               num = num/10;
          }
     }

}
return cnt;

}
