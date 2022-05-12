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
        ll n, mi = INT_MAX, ma = INT_MIN;
        cin >> n;
        ll a[n];
        for(ll i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]<mi) {
                mi = a[i];
            }
            if(a[i]>ma) {
                ma = a[i];
            }
        }
        cout << ma - mi <<endl;
    }
    return 0;
}