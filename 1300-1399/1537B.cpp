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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        if((x==1 && y==1) || (x==n && y==m)) {
            cout<<"1"<<" "<<m<<" "<<n<<" "<<1<<nl;
        }
        else{
            cout<<1<<" "<<1<<" "<<n<<" "<<m<<nl;
        }
    }
    return 0;
}