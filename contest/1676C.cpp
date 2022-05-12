#include <bits/stdc++.h>

using namespace std;
#define int long long

signed main() {
  int t; cin >> t;
  while(t--) {
    int n, m; cin >> n >> m;
    string a[n];
    
    for(int i = 0; i < n; i++) {
      cin >> a[i];
    }

    int ans = LLONG_MAX;
    for(int i = 0; i < n; i++) {
      for(int k = i+1; k < n; k++) {
        int sum = 0;
      for(int j= 0; j < m; j++) {
        sum += abs(a[k][j] - a[i][j]);
      }
      
      ans = min(ans, sum);
      }
    }
    
    cout << ans << endl;
  }
}