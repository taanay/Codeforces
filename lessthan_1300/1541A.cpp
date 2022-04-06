#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

void solve(int n){
    if(n%2==0){
        for(int i = 1; i<=n; i++) {
            cout<<i+1<<" "<<i<<" ";
            i++;
        }
        cout<<endl;
        return;
    }
    cout<<3<<" "<<1<<" "<<2<<" ";
    for(int i = 4; i<=n; i++) {
        cout<<i+1<<" "<<i<<" ";
        i++;
    }
    cout<<endl;
    return;
}

int main() {
    int t, val;
    cin >> t;
    while(t--) {
        cin >> val;
        solve(val);
    }
}