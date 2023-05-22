#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0); 
  cin.tie(NULL); cout.tie(NULL);

  int n;
  int x, score, mins, total = 0;
  stack<pair<int, int>> st;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> x;
    if (x == 1) {
      cin >> score >> mins;
      st.push({mins, score});
    }
    if (!st.empty()) {
      st.top().first--;
      if (st.top().first == 0) {
        total += st.top().second;
        st.pop();
      }
    }
  }
  cout << total;
}