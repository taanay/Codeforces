#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i<n; i++) {
            cin>> a[i];
            a[i]--;
        }
        bool f = true;
        for(int i = 0; i<n; i++) {
            if(a[i]!= i) f = false;
        }
        if(f){
            cout<<0<<nl;
        }
        else if(a[0]==0 || a[n-1] == n-1){
            cout<<1<<nl;
        }
        else if(a[0]==n-1 && a[n-1]==0){
            cout<<3<<nl;
        }
        else {
            cout<<2<<nl;
        }
    }
    return 0;
}