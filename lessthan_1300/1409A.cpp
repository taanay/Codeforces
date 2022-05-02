#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve() {
    ll a, b, k, val;
    cin >> a >> b ;
    k = abs(b-a);
    if(k==0){
        cout<<0<<endl;
        return ;
    }
    if(k<=10) {
        cout<<1<<endl;
        return;
    }
    if(k%10==0){
        cout<<k/10<<endl;
        return;
    }
    val = k/10 + 1;
    cout<<val<<endl;
    return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    ll a, b;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}