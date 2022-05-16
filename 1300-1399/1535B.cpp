#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

// int gcd(int a, int b) {
//     if(b==0) return a;
//     return gcd(b, a%b);
// }

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n;
        vi v, eve, odd;
        for(int i=0; i<n; i++) {
            cin >> x;
            if(x%2==0) eve.push_back(x);
            else odd.push_back(x);
        }
        for(int i=0; i<eve.size(); i++) {
            v.push_back(eve[i]);
        }
        for(int i=0; i<odd.size(); i++) {
            v.pb(odd[i]);
        }
        int k, count=0;
        for(int i =0; i<n; i++){
            for(int j=i+1; j<n; j++) {
                k = __gcd(v[i], 2*v[j]);
                if(k>1) count++;
            }
        }
        cout<<count<<nl;
    }
    return 0;
}