#include <iostream>
#include <queue>
#include <string>
using namespace std;


int main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(NULL); cout.tie(NULL);

  int n;
  cin >> n;
  queue<int> q;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;

    if (s == "push") {
      int num;
      cin >> num;
      q.push(num);
    }
    else if (s == "pop") {
      if (q.size() == 0) cout << -1 << "\n";
      else {
        int x = q.front();
        q.pop();  
        cout << x << "\n";
      }
    }
    else if (s == "size") {
      cout << q.size() << "\n";
    }
    else if (s == "empty") {
      if (q.empty() == false) cout << 0 << "\n";
      else cout << 1 << "\n";
    }
    else if (s == "front") {
      if (q.size() == 0) cout << -1 << "\n";
      else cout << q.front() << "\n";
    }
    else if (s == "back") {
      if (q.size() == 0) cout << -1 << "\n";
      else cout << q.back() << "\n";
    }
  }
}