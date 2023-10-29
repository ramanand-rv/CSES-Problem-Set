#include <bits/stdc++.h>
using namespace std;
#define lli long long int

void hanoi(lli n, char src, char dst, char aux) {
  if (n == 1) {
    cout << src << " " << dst << endl;
    return;
  }
  hanoi(n - 1, src, aux, dst);
  cout << src << " " << dst << endl;

  hanoi(n - 1, aux, dst, src);
}

int main() {
  lli n;
  cin >> n;
  char src = '1', dst = '3', aux = '2';
  cout << pow(2, n) - 1 << endl;
  hanoi(n, src, dst, aux);
}
