#include <iostream>
#include <string>
using namespace std;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  long long n = 0;
  long long a = 666;
  cin >> n;
  int cnt = 0;

  while(1) {
    string s = to_string(a);
    if (s.find("666") != string::npos) {
      cnt++;
    }
    if (cnt == n) {
      cout << a;
      return 0;
    }
    a++;
  }
}