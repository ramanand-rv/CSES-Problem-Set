#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1e9 + 7

int main() {
  lli n;
  cin >> n;
  lli total = 0;
  for (lli i = 5; n / i >= 1; i *= 5) {
    total += n / i;
  }
  cout << total;

  return 0;
}
