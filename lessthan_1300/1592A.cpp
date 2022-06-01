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
        int n, H;
        cin >> n >> H;
        ll a[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        sort(a, a+n);
        ll k = a[n-1]+a[n-2];
        ll c = H/k;
        if(H%k!=0) {
            ll r = H%k;
            if(r<=a[n-1]) {
                cout<<c*2+1<<nl;
            }
            else {
                cout<<c*2+2<<nl;
            }
        }
        else {
            cout<<c*2<<nl;
        }
    }
    return 0;
}