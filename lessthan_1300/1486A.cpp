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
        ll n;
        cin >>n;
        int f=0;
        ll a[n];
        for(int i=0; i<n; i++) cin >> a[i];
        ll extra = 0;
        for(int i=0; i<n; i++) {
            if(a[i]>=i) {
                extra += (a[i]-i); 
            }
            else if(a[i]+extra >=i) {
                extra -= (i-a[i]);
            }
            else {
                f = 1;
                break;
            }
        }
        if(f==1) cout<<"NO"<<nl;
        else cout<<"YES"<<nl;
    }
    return 0;
}