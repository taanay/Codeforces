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
        cin >> n;
        if(n%2==0) {
            cout<<n-3<<" "<<2<<" " << 1<<nl;
        }
        else {
            ll c;
            c = n-1;
            if((c/2)%2==0) {
                cout<<c/2 +1<<" "<<c/2 - 1<<" "<<1<<nl;
            }
            else{
                cout<<c/2 + 2<<" "<<c/2 - 2<<" "<<1<<nl;
            }
        }
    }
    return 0;
}