#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        ll n, l, r, k;
        cin >> n >> l >> r >> k;
        ll a[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        int c=0, f=0;
        for(int i=0; i<n; i++) {
            if(a[i]>=l && a[i]<=r && k>=a[i]) {
                    k -= a[i];
                    c++;
            }
        }
        cout<<c<<nl;
    }
    return 0;
}