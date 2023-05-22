#include <iostream>
using namespace std;

int main() {
  int n, k, cnt = 0;
  int a[11];
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int t = n-1;
  for (int i = 0; i < n; i++) {
    while (t >= 0) {
      while (k >= a[t]) {k -= a[t]; cnt++;}
      t--;
    }
  }
  cout << cnt;
}