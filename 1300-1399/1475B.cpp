#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

void solve() {
    int n;
    cin >> n;
    while(n%2020 != 0) {    
        if(n%2021 == 0) {
            cout<<"YES"<<nl;
            return;
        }
        n-=2021;
        if(n<2020) {
            cout<<"NO"<<nl;
            return;
        }
    }
    cout<<"YES"<<nl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
        }
    return 0;
}