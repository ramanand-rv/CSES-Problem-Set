#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int xpow(int x, unsigned int y){
  int res = 1;
  while(y > 0){
    if(y & 1){
      res *= x;
      y = y >> 1;
      x = x*x;
    }
  }
  return res;
}

int main() 
{
  int tc; cin>>tc;
  while(tc--){
    int n; cin>>n;
    int len = 1;

    for(int p=9 ;; n -= p, len++, p = 9*xpow(10, len-1)*len){
      if(n - p <= 0) break;
    }

    n--;
    int x = n/len;
    int y = n%len;

    int ans = xpow(10, len-1) + x;
    string s = to_string(ans);
    cout<<s[y]<<endl;  
  }
    return 0;
}