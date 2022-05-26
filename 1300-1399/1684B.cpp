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
        ll a, b, c;
        cin >> a >> b >> c;
        cout<<(a+b+c)<<" "<<b+c<<" "<<c<<endl;
    }
    return 0;
}