#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

void solve(){
    ll x1, p1, x2, p2;
    cin >> x1 >> p1 >> x2 >> p2;
    if(p1==p2) {
        if(x1 == x2){cout<<"="<<nl; return;}
        else if(x1>x2){cout<<">"<<nl; return;}
        else { cout<<"<"<<nl;}
    }
    else {
        while(x1<=100000) {
            if(p1==0) break;
            x1 = x1*10;
            p1--;
        }
        while(x2<=100000) {
            if(p2==0) break;
            x2 = x2*10;
            p2--;
        }
        if(p1>p2) {cout<<">"<<nl; return;}
        else if(p2>p1) {cout<<"<"<<nl; return;}
        else {
            if(x1==x2) {cout<<"="<<nl; return;}
            else if(x1>x2) {cout<<">"<<nl; return;}
            else {cout<<"<"<<nl; return;}
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t ;
    while(t--) {
        solve();
    }
    return 0;
}