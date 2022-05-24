#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define rep(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long a[3];
        rep(i,0,2) cin >> a[i];
        sort(a, a+3);
        if(a[0]+a[1]==a[2]) cout<<"YES"<<nl; 

        else if(a[0]==a[1]) {
            if(a[2]%2==0) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else if(a[1]==a[2]){
            if(a[0]%2==0) cout<<"YES"<<nl;
            else cout<<"NO"<<nl;
        }
        else {
            cout<<"NO"<<nl;
        }
    }
    return 0;
}