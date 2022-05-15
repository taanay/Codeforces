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
        int n, a, b;
        string s;
        cin >> n >> a >> b >> s;
        int m = unique(s.begin(), s.end()) - s.begin();
        cout << a*n + max(n*b , (m/2+1)*b)<<nl;
    }
    return 0;
}