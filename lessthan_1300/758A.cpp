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
    ll n, ma = INT_MIN;
    cin >> n;
    vector<ll> v;
    ll x;
    for(int i=0; i<n; i++) {
        cin >> x;
        v.pb(x);
        ma = max(ma, x);
    }
    ll count=0;
    sort(v.begin(), v.end());
    for(int i=0; i<n; i++) {
        count += (ma - v[i]);
    }
    cout<<count<<nl;
    return 0; 
}