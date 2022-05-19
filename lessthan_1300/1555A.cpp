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
        long long n, ans, a;
        cin >> n;
        a = (n+1)/2 * 5;
        ans  = max((ll)15, a);
        cout<<ans<<nl;
    }
    return 0;
}