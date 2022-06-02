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
        ll n, x, count=0;
        cin >> n;
        vector<ll> v;
        for(int i=0; i<n; i++) {
            cin >> x;
            v.push_back(x);
        }
        for(int i=0; i<n; i++) {
            if(v[i]>(i+1)) 
            {
            ll a = abs((i+1) - v[i]);
            count = max(count, a);
            }
        }
        cout<<count<<nl;
    }
    return 0;
}