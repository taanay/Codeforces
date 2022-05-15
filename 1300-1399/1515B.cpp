#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)
#define nl endl

bool solve(long long n) {
    return (ceil(log2(n)) == floor(log2(n)));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        solve(n)?cout<<"YES"<<nl:cout<<"NO"<<nl;
    }
    return 0;
}