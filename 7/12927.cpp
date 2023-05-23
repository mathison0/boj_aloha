#include <iostream>
#include <string>
using namespace std;

char change(char x){
  if (x == 'Y') return 'N';
  else return 'Y';
}


int main() {
  string s;
  cin >> s;
  s = " " + s;
  int cnt = 0;

  for (int i = 1; i < s.size(); i++) {
    if (s[i] == 'Y') {
      cnt++;

      for (int j = i; j < s.size(); j++){
        if (j % i != 0) continue;
        s[j] = change(s[j]);
      }
    }
  }
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == 'Y') {
      cnt = -1;
      break;
    }
  }
  cout << cnt;
}