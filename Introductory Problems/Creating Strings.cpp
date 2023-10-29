#include <bits/stdc++.h>
using namespace std;

vector<string> res;

bool check(string s, int i, int l) {
  for (int k = l; k < i; k++) {
    if (s[k] == s[i])
      return 0;
  }
  return 1;
}

void permut(string s, int l, int r) {
  if (l == r)
    res.push_back(s);
  for (int i = l; i < r + 1; i++) {
    if (check(s, i, l)) {
      swap(s[i], s[l]);
      permut(s, l + 1, r);
      swap(s[i], s[l]);
    }
  }
}

int main() {
  string s;
  cin >> s;
  permut(s, 0, s.size() - 1);
  sort(res.begin(), res.end());

  cout << res.size() << endl;
  for (auto x : res)
    cout << x << endl;

  return 0;
}