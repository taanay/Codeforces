#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define FOR(i,a,b) for (int i = a; i < b; i++)

int solve(int a[], int n) {
    int up = 0;
    for(int i = 0; i<n; i++) {
        if(a[i]==1){
            up++;
        }
        if(a[i]==2) {
            continue;
        }
        if(a[i]==3){
            up++;
        }
    }
    return up;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int a[n];
        FOR(i,0,n){cin >> a[i];}
        cout<<solve(a, n)<<endl;
    }
    return 0;
}