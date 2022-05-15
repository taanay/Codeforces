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
    if(n==1){
        cout<<"1"<<nl;
        return;
    }
    else if(n==2) {
        cout<<"-1"<<nl;
        return;
    }
    vector<vector<int>> a(n, vector<int>(n));
    a[0][0] = 1;
    a[n-1][n-1] = n*n ;
    int x = n*n - 1;
    for(int i = 1; i+1 < n; i++) {
        for(int j = i; j>=0; j--, x--) {
            a[i-j][j] = x;
        }
    }
    x = 2;
    for(int j=n-2; j>0; j--) {
        for(int i = 0; i<n-j; i++, x++) {
            a[n-i-1][j+i] = x;
        }
    }
    for(int i=n-1; i>=0; i--, x++) {
        a[i][n-i-1] = x;
    }
    for(int i = 0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<a[i][j]<< " ";
        }
        cout<<nl;
    } 
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