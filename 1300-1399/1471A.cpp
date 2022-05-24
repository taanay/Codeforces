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
        ll n, x, d, sum=0, maxi=0;
        cin >> n >> d;
        vector<ll> v;
        for(int i=0; i<n; i++) {
            cin >> x;
            // v.pb(x);
            maxi += (x/d);
            if(x%d) maxi++;
            sum += x;
        }
        ll total = sum/d ;
        if(sum%d) total++;
        cout<<total<<" "<<maxi<<nl;
        // sort(v.begin(), v.end());
        
        }
    return 0;
}