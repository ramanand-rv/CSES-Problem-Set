#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int ans = 1, cnt = 1;
  for (int i = 1; i < s.size(); i++) {
    if (s[i] == s[i - 1]) {
      cnt++;
      ans = max(ans, cnt);
    } else {
      cnt = 1;
    }
  }
  cout << ans;

  return 0;
}
