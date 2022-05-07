#include"bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
#define pb push_back
#define REP(i,a,b) for (int i = a; i <= b; i++)

void solve() {
    long long int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        a = a - x;
        b = b - y;
        if(a>=0 && b>=0){
            cout<<"YES"<<endl;
            return;
        }
        if(a<0){
            c = c+a;
        }
        if(b<0){
            c= c+b;
        }
        if(c<0){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        return;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}