#include <iostream>
#include <string>
using namespace std;

int main() {
  string n;
  int cnt = 0;
  
  cin >> n;
  
  int a = stoi(n);

  for (int i = 1; i < a + 1; i++){
    if (a < 100) {
      cnt += 1;
    }
    else {
      string b = n[0];
      string c = n[1];
      string d = n[2];
      if (stoi(b) - stoi(c) == stoi(c) - stoi(d)){
      cnt += 1;
      }
    }
  }
  cout << cnt;
}