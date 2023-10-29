#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int total = n * (n + 1) / 2;
  vector<int> arr1, arr2;
  if (total & 1)
    cout << "NO" << endl;
  else {
    cout << "YES" << endl;
    total /= 2;
    while (n) {
      if (total - n >= 0) {
        arr1.push_back(n);
        total -= n;
      } else {
        arr2.push_back(n);
      }
      n--;
    }
    cout << arr1.size() << endl;
    for (auto e : arr1) {
      cout << e << " ";
    }
    cout << endl << arr2.size() << endl;
    for (auto e : arr2) {
      cout << e << " ";
    }
  }
  return 0;
}
