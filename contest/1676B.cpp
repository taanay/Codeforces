#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, mi = INT_MAX;
        cin >> n;
        long long int a[n], c = 0;
        for(int i = 0; i<n; i++) {
            cin >> a[i];
            if(a[i]<mi) {
                mi = a[i];
            }
        }
        if(n==1) {
            cout<<0<<endl;
            continue;
        }
        for(int i = 0; i<n; i++) {
            c += a[i]-mi;
        }
        cout<<c<<endl;
    }
    return 0;
}