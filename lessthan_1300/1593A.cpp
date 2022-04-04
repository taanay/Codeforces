#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

void solve(){
    long long a, b, c;
    cin >> a >> b >> c; 
    int v1 = max(b,c) - a + 1;
    int v2 = max(a,c) - b + 1;
    int v3 = max(a,b) - c + 1;
    
    cout<< max(0,v1) << " " << max(0,v2) << " " <<max(0, v3)<<endl; 
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}