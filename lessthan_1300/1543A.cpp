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
        ll a, b, ans=0;
        cin >> a >> b;
        if(a>b) swap(a, b);
        ans = b-a;
        if(ans==0) cout<< 0 << " " << 0 <<nl;
        else{
            ll c = (ans - a%ans);
            ll d = a%ans;
            cout<<ans<<" "<<min(c, d)<<nl;
        }
    }
    return 0;
}