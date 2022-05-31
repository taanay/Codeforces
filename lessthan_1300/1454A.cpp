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
    while(t--) {
        int n;
        cin >> n;
        vector<int> v;
        for(int i=1; i<=n; i++) {
            v.push_back(i);
        }
        reverse(v.begin(), v.end());
        if(n%2!=0) {
            int k = n/2;
            swap(v[k], v[n-1]);
        }
        for(int i=0; i<n; i++) {
            cout<<v[i]<<" ";
        }
        cout<<nl;
    }
    return 0;
}