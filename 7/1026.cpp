#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n, s = 0;
  cin >> n;
  int a[50], b[50];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }
  sort(a, a+n);
  sort(b, b+n, greater<>());

  for (int i = 0; i < n; i++){
    s += a[i] * b[i];
  }

  cout << s;
}