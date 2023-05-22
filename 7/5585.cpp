#include <iostream>
using namespace std;

int main() {
  int x, cnt = 0;
  cin >> x;
  int a = 1000 - x;

  while (500 <= a) {a -= 500; cnt++;}
  while (100 <= a) {a -= 100; cnt++;}
  while (50 <= a) {a -= 50; cnt++;}
  while (10 <= a) {a -= 10; cnt++;}
  while (5 <= a) {a -= 5; cnt++;}
  while (1 <= a) {a -= 1; cnt++;}
  cout << cnt;
}