#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define mod 1e9 + 7

int main() {
  string s, str1 = "", str2 = "";
  unordered_map<char, int> mp;
  int total = 0;
  char ch;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    mp[s[i]]++;
  }
  for (auto it : mp) {
    if (it.second & 1) {
      total++;
      ch = it.first;
    }
  }

  if (total > 1)
    cout << "NO SOLUTION" << endl;
  //  chars with odd number occurence > 1 OR a single character with odd
  //  occurence in a even length string
  else if ((total >= 1 && !s.size() & 1)) {
    cout << "NO SOLUTION" << endl;
  }

  else {
    for (auto it : mp) {
      string str(it.second / 2, it.first);
      str1 = str1 + str;
      str2 = str + str2;
    }
    if (total == 1)
      cout << str1 << ch << str2;
    else
      cout << str1 + str2;
  }

  return 0;
}
