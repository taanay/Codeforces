#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n, x, i, ans=0;
        cin >> n;
        long long a[n];
        REP(i, 0, n-1){
            cin >> a[i];
        }
        for(i=0; i<n-1; i++) {
            ans = max(ans, a[i] * a[i+1]);
        }
        cout<<ans<<endl;
        
    }
    return 0;
}