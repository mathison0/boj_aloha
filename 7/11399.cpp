#include <iostream>
using namespace std;

int main() {
  int n,temp;
  cin >> n;
  int a[1001];

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n-i-1; j++) {
      if(a[j] > a[j+1]) {
        temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }

  int p = 0;
  for (int i = 0; i < n; i++) {
    p += (n-i) * a[i];
  }
  cout << p;
}