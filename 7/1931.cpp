#include <iostream>
#include <algorithm>
using namespace std;

pair<int, int> arr[100020];

bool cmp(pair<int, int> p1, pair<int, int> p2) {
  if (p1.second != p2.second) { return p1.second < p2.second; }
  return p1.first < p2.first;
}

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> arr[i].first >> arr[i].second;
  }
  sort(arr+1, arr+n+1, cmp);
  int ans = 0, tim = 0;
  for (int i =1; i <= n; i++) {
    int st = arr[i].first, ed = arr[i].second;
    if (tim <= st) {
      tim = ed; ans += 1;
    }
  }
  cout << ans;
}