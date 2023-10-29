#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1e9 + 7

int power(lli x, lli n, lli p) {
  // (x^n) mod p
  lli res = 1;
  x %= p;
  while (n) {
    if (n & 1)
      res = (res * x) % p;
    n >>= 1;
    x = (x * x) % p;
  }
  return res;
}

int main() {
  lli n;
  cin >> n;
  cout << power(2, n, mod);
  return 0;
}
