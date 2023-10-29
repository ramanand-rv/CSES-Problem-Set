#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  int m = arr[0];
  long long total = 0;
  for (int i = 1; i < n; i++) {
    total += max(0, m - arr[i]);
    m = max(m, arr[i]);
  }

  cout << total;

  return 0;
}
