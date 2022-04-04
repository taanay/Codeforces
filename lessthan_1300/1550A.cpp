#include"bits/stdc++.h"
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")
using namespace std;

void solve(){
    long long mx=-1,count=0,x,y,z;
    vector<long long> v;
    for(int i = 0; i<3; i++) {
        cin >> x;
        v.push_back(x);
        if(v[i]>mx){
            mx = v[i];
        }
    }

    for(int i=0; i<3; i++){
        if(v[i] != mx){
            v.push_back(mx - v[i]);
        }
    }
    return;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}