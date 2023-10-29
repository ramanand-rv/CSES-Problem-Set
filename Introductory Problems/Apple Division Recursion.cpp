#include <bits/stdc++.h>
using namespace std;
#define lli long long int

int findMinDiff(int *v, int cursum, int &total, int i) {
  if (i == 0)
    return abs((total - cursum) - cursum);
  return min(findMinDiff(v, cursum + v[i], total, i - 1),
             findMinDiff(v, cursum, total, i - 1));
}

int main() {
  int n;
  cin >> n;
  int *v = new int[n];
  int total = 0;
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    total += v[i];
  }
  cout << findMinDiff(v, 0, total, n - 1);

  return 0;
}