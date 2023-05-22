#include <iostream>
#include <deque>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(NULL); cout.tie(NULL);

  int n, num, x;
  cin >> n;
  deque<int> d;
  string s;
  
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (s == "push_front") {
      cin >> num;
      d.push_front(num);
    }
    else if (s == "push_back") {
      cin >> num;
      d.push_back(num);
    }
    else if (s == "pop_front") {
      if (d.size() == 0) cout << -1 << "\n";
      else {
        cout << d.front() << "\n";
        d.pop_front(); 
      }
    }
    else if (s == "pop_back") {
      if (d.size() == 0) cout << -1 << "\n";
      else {
        cout << d.back() << "\n";
        d.pop_back();
      }
    }
    else if (s == "size") {
      cout << d.size() << "\n";
    }
    else if (s == "empty") {
      if (d.empty()) cout << 1 <<"\n";
      else cout << 0 << "\n";
    }
    else if (s == "front") {
      if (d.size() == 0) cout << -1 << "\n";
      else {
        cout << d.front() << "\n";
      }
    }
    else if (s == "back") {
      if (d.size() == 0) cout << -1 << "\n";
      else {
        cout << d.back() << "\n";
      }
    }
  }
}