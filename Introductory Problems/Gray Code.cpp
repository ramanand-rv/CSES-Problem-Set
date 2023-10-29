#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1e9 + 7

int main() {
  lli n;
  cin >> n;
  vector<string> grayCode;
  grayCode.push_back("");
  for (int i = 0; i < n; i++) {
    lli sz = grayCode.size();
    for (int j = sz - 1; j >= 0; j--) {
      grayCode.push_back(grayCode[j]);
    }
    sz *= 2;
    for (int j = 0; j < sz; j++) {
      if (j < grayCode.size() / 2) {
        grayCode[j] += "0";
      } else {
        grayCode[j] += "1";
      }
    }
  }
  for (string s : grayCode)
    cout << s << endl;

  return 0;
}
