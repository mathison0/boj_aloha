#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  int n, k;
  queue <int> q;

  cin >> n >> k;
  for (int i = 1; i < n+1; i++) {
    q.push(i);
  }

  cout << "<";

  while (q.size() > 1) {
    for (int i = 1; i < k; i++) {
      int a = q.front();
      q.pop();
      q.push(a);
    }
    cout << q.front() << ", ";
    q.pop();
  }
  cout << q.front() << ">\n";
}