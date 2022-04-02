#include"bits/stdc++.h"
using namespace std;

void solve() {
    int a, b, c, d, m1, m2;
    cin >> a >> b >> c >> d;
    m1 = max(a,b);
    m2 = max(c,d);
    if((m1>c || m1>d) && (m2>a || m2>b)){
        cout<<"YES"<<endl;
        return ;
    }
    else{
        cout<<"NO"<<endl;
        return ;
    }
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}