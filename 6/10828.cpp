#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(NULL); cout.tie(NULL);

  int n;
  cin >> n;
  stack<int> a;

  for (int i = 0; i < n; i++) {
    string s;
    cin >> s;
    int num;
    if (s == "push") {
      cin >> num;
      a.push(num);
    }
    else if (s == "pop") {
      if (a.size()==0) cout << -1 << endl;
      else {
        int x = a.top();
        a.pop();  
        cout << x << endl;
      }
    }
    else if (s == "size") {
      cout << a.size() << endl;
    }
    else if (s == "empty") {
      if (a.empty() == false) cout << 0 << endl;
      else cout << 1 << endl;
    }
    else if (s == "top") {
      if (a.size()==0) cout << -1 << endl;
      else cout << a.top() << endl;
    }   
  }
}