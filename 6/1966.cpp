#include <isotream>
#include <queue>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);

  queue<int> q;
  int c, m, n, imp;

  cin >> c;

  for (int i = 0; i < n; i++){
    cin >> m >> n;
    for (int j = 0; j < m; j++) {
      cin >> imp;
      q.push(imp);
    }
  }
}