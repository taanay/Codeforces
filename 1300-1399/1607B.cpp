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
        ll x, n, ans=0;
        cin >> x >> n;
        if(x%2==0) {
            if(n%4==0) ans = x;
            if(n%4==1) ans = x - n;
            if(n%4==2) ans = x + 1;
            if(n%4==3) ans = n+1+x;
        }
        else {
            if(n%4==0) ans = x;
            if(n%4==1) ans = x+n;
            if(n%4==2) ans = x-1;
            if(n%4==3) ans = x-1-n;
        }
        cout<<ans<<nl;
    }
    return 0;
}