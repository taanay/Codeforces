#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

void solve(long long n) {
    double val = 0, sum = 0, temp, mx=-2000000000000, res;
    long long i;
    long long a[n];
    for(i = 0; i<n; i++) {
        cin >> a[i];
        if(a[i]>mx){
            mx = a[i];
        }
        sum += a[i];
    }
    val = (sum - mx) / (double)(n-1);
    res = (double)mx + val;
    cout<<fixed<<setprecision(9)<<res<<endl;
}

int main() {
    long long t, n;
    cin >> t;
    while(t--) {
        cin >> n;
        solve(n);
    }
    return 0;
}