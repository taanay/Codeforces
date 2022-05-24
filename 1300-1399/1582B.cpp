#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

long long solve(){
        long long n, one=0, zero=0;
        cin >> n;
        ll a[n];
        
        for(int i=0; i<n; i++) {
            cin >> a[i];
            if(a[i]==1) one++;
            if(a[i]==0) zero++;
        }
        return one*(1ll << zero);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        cout<<solve()<<nl;
    }
    return 0;
}