#include <iostream>
using namespace std;

int main() {
  int t;
  cin >> t;
  int a=0, b=0, c=0;

  while (300 <= t) {t -= 300; a += 1;}
  while (60 <= t) {t -= 60; b += 1;}
  while (10 <= t) {t -= 10; c += 1;}
  if (t == 0) cout << a << " " << b << " " << c;
  else cout << -1;
}