#include <iostream>
using namespace std;

int main() {
  long long s;
  cin >> s;
  int cnt = 0;
  int i = 1;
  while (s - i >= 0) {
    s -= i;
    i++; cnt++;
  }
  cout << cnt;
}