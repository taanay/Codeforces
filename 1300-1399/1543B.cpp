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
        ll n, sum=0;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            sum += a[i];
        }
        ll l = sum%n;
        cout<<l*abs(n-l)<<nl;
    }
    return 0;
}