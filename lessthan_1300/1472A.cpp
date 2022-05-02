#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve() {
    long long n, w, h, count = 1;
    cin >> w >> h >> n;
    if(n==1){
        cout<<"YES"<<endl;
        return;
    }
    while(w%2==0){
        count *=2;
        w /=2;
    }
    while(h%2==0){
        count *=2;
        h/=2;
    }
    if(count>=n){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
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