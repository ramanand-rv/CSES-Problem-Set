#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1e9 + 7

int main() {
  lli tc;
  cin >> tc;
  while (tc--) {
    int a, b;
    cin >> a >> b;
    if ((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)))
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}
