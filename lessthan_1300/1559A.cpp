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
    cin >>t;
    while(t--) {
        int n, mi;
        cin >> n;
        ll a[n];
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(i==0) mi = a[i];
            else {
                mi = mi&a[i];
            }
        }
        cout<< mi << nl;
    }
    return 0;
}